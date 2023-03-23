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

		vector <int> v(n);
		for (auto &i : v) cin >> i;

		sort(v.begin() , v.end());

		bool f0 = false ,f1 = false ,f2 =false;
		for (int i = 0; i < n; i++){
			if (v[i] == 0) f0 = true;
			else if (v[i] == 1) f1 = true;
			else if (v[i] == 2) f2 = true;
		}

		if (f0 and f1){
			cout << "NO" << endl;
		}else if (f1 and f2){
			cout << "NO" << endl;
		}else {
			if (f1){
				bool flag = false;
				for (int i = n - 1; i >= 0; i--){
					if (v[i] - v[i - 1] == 1) flag = true;
				}
				if (flag) cout << "NO" << endl;
				else cout << "YES" << endl;
			}else cout << "YES" << endl;
		}
 

		
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
