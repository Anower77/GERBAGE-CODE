#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


// void solve()
// {
//    ll n,k; cin>>n>>k;
//    vector<ll> a(n);
//    for(int i=0; i<n; i++) cin>>a[i];

//    sort(a.begin(), a.end());
//    ll ans=-1;

//    if(k==1)
//    {
//       ans=a[0];
//       for(int i=1; i<n; i++) 
//          ans = min(ans, a[i]-a[i-1]);
//       cout<<ans<<'\n';
//    }
//    else if(k==2)
//    {
//       ll ans=a[0];

//       for(int i=0; i<n-1; i++)
//       {
//          for(int j=i+1; j<n; j++)
//          {
//             ll val = abs(a[j]-a[i]);
            
//             ll idx = -1;
//             ll l=0, h=n-1;
//             while(l<=h)
//             {
//                ll mid = l+(h-l)/2;
//                if(a[mid]>=val)
//                {
//                   idx=mid;
//                   h=mid-1;
//                }
//                else
//                {
//                   l=mid+1;
//                }
//             }


//             if(idx==-1) ans=min(ans, val-a[n-1]);
//             else ans = min(ans ,a[idx]-val);
         
//             if(idx==0) ans=min(ans, a[0]-val);
//             else ans=min(ans, abs(val-a[idx-1]));
//          }
//       }
//       cout<<ans<<'\n';
//    }
//    else if(k>2) cout<<0<<'\n';
// }




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   ll t; cin>>t;
   while(t--)
   {
      ll n,k; cin>>n>>k;
      vector<ll> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
   
      sort(a.begin(),a.end());

      ll ans=-1;
 
      if(k==1)
      {
         ans=a[0];
         for(int i=1;i<n;i++)
         {
            ans=min(ans,a[i]-a[i-1]);
         }
 
         cout<<ans<<endl;
      }
      else if(k==2)
      {
         ll ans=a[0];
         for(int i=0;i<n-1;i++)
         {
            for(int j=i+1;j<n;j++)
            {
               ll val=abs(a[j]-a[i]);
 
               ans=min(ans,val);
 
               ll indx=-1, low=0,high=n-1;
               while(low<=high)
               {
                  ll mid=low+(high-low)/2;
                 
                  if(a[mid] >= val)
                  {
                     indx=mid;
                     high=mid-1;
                  }
                  else
                  {
                     low=mid+1;
                  }
               }
 
               if(indx==-1) ans=min({ans,val-a[n-1]});
               else ans=min(ans,a[indx]-val);
 
               if(indx==0) ans=min(ans,a[0]-val);
               else ans=min(ans,abs(val-a[indx-1]));
 
            }
         }
 
         cout<<ans<<endl;
      }
      else if(k>2) cout<<0<<endl;
   }

    return 0;
}