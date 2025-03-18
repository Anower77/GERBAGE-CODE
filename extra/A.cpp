#include "bits/stdc++.h"
using namespace std;

int kth_on(int x, int k)
{
    return (x>>k) & 1;
}

void print_bits(int x)
{
    for(int k=0; k<=31; k++)
    {
        if(kth_on(x,k))
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    cout<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);



    print_bits(2);
    return 0;
}