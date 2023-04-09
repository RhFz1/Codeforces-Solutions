#include <bits/stdc++.h>
using namespace std;

#define int long long




signed main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;	
	while (t--) {
		int n , m;
		cin >> n >> m;
		vector <int> a(n + m);
		for (int i = 0; i < n + m; i++){
			cin >> a[i];
		}
		sort(a.begin() , a.end() - 1);
		reverse(a.begin() , a.end());

		int ans = 0;
		for (int i = 0; i < n; i++){
			ans += a[i];
		}
		cout << ans << endl;


	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
