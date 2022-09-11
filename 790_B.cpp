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
		vector <int > v(n);
		for(int &i : v) cin >> i;
		int min_ele = 1e9;
		for (int i = 0; i < n; i++){
			if (v[i] < min_ele){
				min_ele = v[i];
			}
		}
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			if (v[i] > min_ele){
				ans += (v[i] - min_ele);
			}
		}
		cout << ans << endl;
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
