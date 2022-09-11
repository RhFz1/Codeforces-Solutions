#include <bits/stdc++.h>
using namespace std;

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
		int ans = 1e9;
		if (n == 1){
			cout << 2 << endl;
			continue;
		}
		for(int i = 0;i <= 2; i++){
			int temp = (n - (2 * i)) / 3;
			if (temp == (n - (2 * i)) / 3 and (n - (2 * i)) >= 0){
				ans = min(ans , temp);
				ans += i;
			}
		}
		cout << ans << endl;
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
