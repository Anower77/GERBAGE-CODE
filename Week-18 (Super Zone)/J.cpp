#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

struct seg
{
	int l,r,pos;
	seg(){}
	seg(int _l, int _r, int _pos)
	{
		l = _l;
		r = _r;
		pos = _pos;
	}
};

bool cmp(seg a, seg b)
{
	if(a.l == b.l) return a.r>b.r;
	return a.l<b.l;
}



int main()
{

    vector<seg> v;
    int n,l,r; cin>>n;

    for(int i=0; i<n; i++)
    {
    	cin>>l>>r;
    	v.push_back(seg(l,r,i+1));
    }



    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size()-1; i++)
    {
    	if(v[i+1].r <= v[i].r)
    	{
    		cout<< v[i+1].pos<< " " << v[i].pos <<'\n';
    		return 0;
    	}
    }

    cout<< "-1 -1" <<'\n';
    return 0;
}