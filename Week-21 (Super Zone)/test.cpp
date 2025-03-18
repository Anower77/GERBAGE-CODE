#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


// Ecuild Algo
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}




void age()
{
    cout<< "birth data : ";
    int barth; 
    cin>>barth;
    int age = 2024 - (barth);
    cout<< "age "<< age << '\n';

}






// void solve()
// {
//     int a,b,c,d; cin>>a>>b>>c>>d;
//     int start = max(a,c); // c = 5
//     int end = min(b,d); // b = 15

//     if(start <= end) 
//         cout<< start << " " << end << '\n';
//     else 
//         cout<< -1 << '\n';
// }






int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // int t; cin>>t;
    // while(t--) solve();
    age();
    return 0;
}





// 1. Binomial Theorem
// 2. Faulhaber's Theorem
// 3. Bernoulli Number