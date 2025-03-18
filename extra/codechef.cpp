#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	int len; cin>>len;
		string s; cin>>s;

		int cnt =0;
		for(int i=0; i<len; i++)
		{
			if(s[i] == s[i-1])
			{
				cnt++;
			}
		}
		cout<<cnt<<'\n';
    }

    
    return 0;
}
