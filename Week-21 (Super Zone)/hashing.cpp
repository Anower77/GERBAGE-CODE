#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define TABLE_SIZE 1000003 // use a large prime number

unsigned int hash_func(const string &key)
{
	unsigned int h = 0;
	unsigned int o = 31415;
	const unsigned int t = 27183;
	const char *k = key.c_str();
	while (*k)
	{
		h = (o * h + *k++) % TABLE_SIZE;
		o = o * t % (TABLE_SIZE - 1);
	}
	return h;
}

unsigned int hash_func(const unsigned int key)
{
	// make sure table size is actually (TABLE_SIZE+1) (more about this below)
	return(key & TABLE_SIZE);
}





template <class TKey, class TValue> class Hashtable;
template <class TKey, class TValue> class HashtableItem;
template <class TKey, class TValue> class HashtableDataMembers;

template <class TKey, class TValue> class HashtableDataMembers
{
public:
	HashtableItem<TKey, TValue> **table;
	HashtableItem<TKey, TValue> *cur_table_item;
	unsigned int cur_index, table_size;
	HashtableDataMembers();
	~HashtableDataMembers();
};

template <class TKey, class TValue> class Hashtable
{
private:
	HashtableDataMembers<TKey, TValue> *dm;

public:
	Hashtable();
	Hashtable(const Hashtable &obj);
	~Hashtable();
	bool Add(const TKey &key, const TValue &value); // Add a new entry, returns false when the key already exists
	const Hashtable<TKey, TValue> &operator=(const Hashtable<TKey, TValue> &obj);
	HashtableItem<TKey, TValue> *operator[](const TKey &key) const;
	void Remove(const TKey &key); // removes one table entry
	void Clear(); // removes all the table entries
	HashtableItem<TKey, TValue> *GetFirst(); // for looping through the table
	HashtableItem<TKey, TValue> *GetNext(); // for looping through the table
};

template <class TKey, class TValue> class HashtableItem
{
private:
	HashtableItem<TKey, TValue> *pnext;
	TKey key;
	TValue value;

	// keep these private to prevent the client from creating this object
	HashtableItem() {}
	HashtableItem(const TKey &key, const TValue &value);
	~HashtableItem();

public:
	const TKey &Key() const;
	const TValue &Value() const;
	const TValue &operator=(const TValue &value);

	// some friend functions that can access the private data
	friend bool Hashtable<TKey, TValue>::Add(const TKey &key, const TValue &value);
	friend HashtableDataMembers<TKey, TValue>::HashtableDataMembers();
	friend HashtableDataMembers<TKey, TValue>::~HashtableDataMembers();
	friend void Hashtable<TKey, TValue>::Remove(const TKey &key);
	friend const Hashtable<TKey, TValue> &Hashtable<TKey, TValue>::operator=(const Hashtable<TKey, TValue> &obj);
	friend HashtableItem<TKey, TValue> *Hashtable<TKey, TValue>::operator[](const TKey &key) const;
	friend HashtableItem<TKey, TValue> *Hashtable<TKey, TValue>::GetNext();
	friend void Hashtable<TKey, TValue>::Clear();
};





// ##################### class HashtableDataMembers ###################
template <class TKey, class TValue> HashtableDataMembers<TKey, TValue>::HashtableDataMembers()
{
	cur_table_item = nullptr;
	cur_index = 0;
	table_size = TABLE_SIZE + 1; // add one to the TABLE_SIZE because the int hash_func can actually return TABLE_SIZE
	table = new HashtableItem<TKey, TValue>*[table_size]();
	for (unsigned int i = 0; i < table_size; table[i++] = nullptr);
}
template <class TKey, class TValue> HashtableDataMembers<TKey, TValue>::~HashtableDataMembers()
{
	for (unsigned int i = 0; i < table_size; i++)
	{
		if (table[i])
		{
			delete table[i];
			table[i] = nullptr; // clean-up the memory
		}
	}
	delete[] table;
}




// ##################### class Hashtable ###########################
template <class TKey, class TValue> Hashtable<TKey, TValue>::Hashtable()
{
	dm = new HashtableDataMembers<TKey, TValue>();
}
template <class TKey, class TValue> Hashtable<TKey, TValue>::Hashtable(const Hashtable &obj)
{
	dm = new HashtableDataMembers<TKey, TValue>();
	this->operator=(obj);
}
template <class TKey, class TValue> Hashtable<TKey, TValue>::~Hashtable()
{
	delete dm;
	dm = nullptr;
}
template <class TKey, class TValue> const Hashtable<TKey, TValue> &Hashtable<TKey, TValue>::operator=(const Hashtable<TKey, TValue> &obj)
{
	if (this != &obj)
	{
		unsigned int i;
		Clear();
		if (dm->table_size != obj.dm->table_size)
		{
			if (dm->table)
				delete[]dm->table;
			dm->table_size = obj.dm->table_size;
			dm->table = new HashtableItem<TKey, TValue>*[dm->table_size]();
			for (i = 0; i < dm->table_size; dm->table[i++] = nullptr);
		}
		dm->cur_index = obj.dm->cur_index;
		for (i = 0; i < obj.dm->table_size; i++)
		{
			HashtableItem<TKey, TValue> **ppobjnode, **ppnode;
			ppobjnode = &obj.dm->table[i];
			ppnode = &dm->table[i];
			while (*ppobjnode)
			{
				(*ppnode) = new HashtableItem<TKey, TValue>((*ppobjnode)->key, (*ppobjnode)->value);
				if (obj.dm->cur_table_item == *ppobjnode)
					dm->cur_table_item = *ppnode;
				ppnode = &(*ppnode)->pnext;
				ppobjnode = &(*ppobjnode)->pnext;
			}
		}
	}
	return (*this);
}
template <class TKey, class TValue> bool Hashtable<TKey, TValue>::Add(const TKey &key, const TValue &value)
{
	unsigned int i = hash_func(key);
	HashtableItem<TKey, TValue> **ppnode;
	for (ppnode = &dm->table[i]; (*ppnode) && ((*ppnode)->key != key); ppnode = &(*ppnode)->pnext);
	if (*ppnode) // then found
		return false;
	(*ppnode) = new HashtableItem<TKey, TValue>(key, value);
	return true;
}
template <class TKey, class TValue> HashtableItem<TKey, TValue> *Hashtable<TKey, TValue>::operator[](const TKey &key) const
{
	unsigned int i = hash_func(key);
	HashtableItem<TKey, TValue> *pnode;
	for (pnode = dm->table[i]; pnode && (pnode->key != key); pnode = pnode->pnext);
	return pnode;
}
template <class TKey, class TValue> void Hashtable<TKey, TValue>::Remove(const TKey &key)
{
	unsigned int i = hash_func(key);
	HashtableItem<TKey, TValue> **ppnode, *tmp;
	for (ppnode = &dm->table[i]; (*ppnode) && ((*ppnode)->key != key); ppnode = &(*ppnode)->pnext);
	if (*ppnode)
	{
		tmp = (*ppnode);
		(*ppnode) = (*ppnode)->pnext;
		tmp->pnext = nullptr;
		delete tmp;
	}
}
template <class TKey, class TValue> void Hashtable<TKey, TValue>::Clear()
{
	for (unsigned int i = 0; i < dm->table_size; i++)
	{
		if (dm->table[i])
		{
			delete dm->table[i];
			dm->table[i] = nullptr;
		}
	}
}
template <class TKey, class TValue> HashtableItem<TKey, TValue> *Hashtable<TKey, TValue>::GetFirst()
{
	unsigned int i;
	dm->cur_table_item = nullptr;
	dm->cur_index = 0;

	for (i = dm->cur_index; i < dm->table_size && dm->table[i] == nullptr; i++);
	if (i < dm->table_size)
	{
		dm->cur_table_item = dm->table[i];
		dm->cur_index = i;
	}
	return dm->cur_table_item;
}
template <class TKey, class TValue> HashtableItem<TKey, TValue> *Hashtable<TKey, TValue>::GetNext()
{
	if (dm->cur_table_item && dm->cur_table_item->pnext)
		dm->cur_table_item = dm->cur_table_item->pnext;
	else
	{
		unsigned int i;
		for (i = dm->cur_index + 1; i < dm->table_size && dm->table[i] == nullptr; i++);
		if (i < dm->table_size)
		{
			dm->cur_table_item = dm->table[i];
			dm->cur_index = i;
		}
		else
		{
			dm->cur_table_item = nullptr;
			dm->cur_index = 0;
		}
	}
	return dm->cur_table_item;
}




// ##################### class HashtableItem ###########################
template <class TKey, class TValue> HashtableItem<TKey, TValue>::HashtableItem(const TKey &xKey, const TValue &xValue)
{
	key = xKey;
	value = xValue;
	pnext = nullptr;
}
template <class TKey, class TValue> HashtableItem<TKey, TValue>::~HashtableItem()
{
	if (this->pnext)
	{
		delete this->pnext;
		this->pnext = nullptr; // clean-up memory
	}
}
template <class TKey, class TValue> const TKey &HashtableItem<TKey, TValue>::Key() const
{
	return this->key;
}
template <class TKey, class TValue> const TValue &HashtableItem<TKey, TValue>::Value() const
{
	return this->value;
}
template <class TKey, class TValue> const TValue &HashtableItem<TKey, TValue>::operator=(const TValue &value)
{
	this->value = value;
	return value;
}




// #################### driver ####################
int main(int argc, char *argv[])
{
	{
		double key;
		string value;
		Hashtable<double, string> ht;
		HashtableItem<double, string> *item;

		key = 123.1;
		value = "test1";
		ht.Add(key, value);
		key = 123.2;
		value = "test2";
		ht.Add(key, value);
		key = 123.3;
		value = "test3";
		ht.Add(key, value);
		key = 123.4;
		value = "test4";
		ht.Add(key, value);
		item = ht.GetFirst();
		cout << item->Key() << "=" << item->Value() << endl;
		item = ht.GetNext();
		cout << item->Key() << "=" << item->Value() << endl;
		Hashtable<double, string> ht2;
		ht2 = ht; // test the Hashtable assignment operator
		item = ht2.GetNext();
		cout << item->Key() << "=" << item->Value() << endl;
		item = ht2.GetNext();
		cout << item->Key() << "=" << item->Value() << endl;
	}
	{
		string key, value;
		Hashtable<string, string> ht;
		HashtableItem<string, string> *item;

		while (true)
		{
			cout << "enter a key (string) for the hash (q to quit): ";
			cin >> key;
			if (key == "q")
				break;
			item = ht[key];
			if (item == nullptr)
			{
				cout << "enter a value (string) for the key \"" << key << "\" (q to quit): ";
				cin >> value;
				if (value == "q")
					break;
				ht.Add(key, value);
			}
			else
			{
				cout << "the value at \"" << item->Key() << "\" is \"" << item->Value() << "\"\r\nenter a new value (string): ";
				cin >> value;
				(*item) = value;
			}
		}
		while (true)
		{
			item = ht.GetFirst();
			while (item)
			{
				cout << "the value at \"" << item->Key() << "\" is \"" << item->Value() << "\"\r\n";
				item = ht.GetNext();
			}
			cout << "enter the key (string) to delete (q to quit): ";
			cin >> key;
			if (key == "q")
				break;
			ht.Remove(key);
		}
	}

	{
		int key, value;
		Hashtable<int, int> ht;
		HashtableItem<int, int> *item;

		while (true)
		{
			cout << "enter a key (integer) for the hash (-1 to quit): ";
			cin >> key;
			if (key == -1)
				break;
			item = ht[key];
			if (item == nullptr)
			{
				cout << "enter a value (integer) for the key " << key << ": ";
				cin >> value;
				ht.Add(key, value);
			}
			else
			{
				cout << "the value at " << item->Key() << " is " << item->Value() << "\r\nenter a new value (integer): ";
				cin >> value;
				(*item) = value;
			}
		}
		while (true)
		{
			item = ht.GetFirst();
			while (item)
			{
				cout << "the value at " << item->Key() << " is " << item->Value() << "\r\n";
				item = ht.GetNext();
			}
			cout << "enter the key (integer) to delete (-1 to quit): ";
			cin >> key;
			if (key == -1)
				break;
			ht.Remove(key);
		}
	}

	{
		// the hash is not optimized for double datatypes but it will still work
		double key;
		string value;
		Hashtable<double, string> ht;
		HashtableItem<double, string> *item;

		while (true)
		{
			cout << "enter a key (floating point) for the hash (-1 to quit): ";
			cin >> key;
			if (key == -1)
				break;
			item = ht[key];
			if (item == nullptr)
			{
				cout << "enter a value (string) for the key " << fixed << key << ": ";
				cin >> value;
				ht.Add(key, value);
			}
			else
			{
				cout << "the value at " << fixed << item->Key() << " is \"" << item->Value() << "\"\r\nenter a new value (string): ";
				cin >> value;
				(*item) = value;
			}
		}
		while (true)
		{
			item = ht.GetFirst();
			while (item)
			{
				cout << "the value at " << fixed << item->Key() << " is \"" << item->Value() << "\"\r\n";
				item = ht.GetNext();
			}
			cout << "enter the key (floating point) to delete (-1 to quit): ";
			cin >> key;
			if (key == -1)
				break;
			ht.Remove(key);
		}
	}
	return 0;
}