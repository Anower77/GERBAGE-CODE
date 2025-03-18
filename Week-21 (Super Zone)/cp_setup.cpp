#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


int solve() {
	int n;
	if(!(cin >> n)) {
		return 1;
	}
	cout<< n << '\n';
	return 0;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1e9;
    for(int i=1; i<=t; i++) {
    	if(solve()) {
    		break;
    	} 
    	#ifdef ONPC
    		cout<< _______________ << '\n';
    	#endif
    }
    #ifdef ONPC
    	cerr<< '\n' << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" <<'\n';
    #endif

    return 0;
}





// TEST CASE
// 3
// 5 10
// 20 20
// 10 20





