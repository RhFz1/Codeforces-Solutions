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
		string s;
		cin >> s;
		int cnt = 2;
		int ans = 0;
		for (int i = 0; i < n; ++i){
			if(s[i] == '1'){
				cnt++;
			}
			else{
				ans += max(0,2 - cnt);
				cnt = 0;
			}
		}
		cout << ans << endl;
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
