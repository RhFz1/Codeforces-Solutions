#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if(n & 1){
			cout << 0 << endl;
		}else{
			ll ans = 1;
			for (int i = 2; i < n/2 + 1; ++i){
				ans *= (i * i) % 998244353;
				ans %= 998244353; 
			}
			cout << ans << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
