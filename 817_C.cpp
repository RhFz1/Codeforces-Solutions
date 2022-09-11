#include <bits/stdc++.h>
using namespace std;
int power(int a , int b){
	int res = 1;
	while (b){
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		unordered_map <string  , int > mp;
		unordered_map <string ,vector <int >> mp_1;
		for (int i = 0; i < 3 * n; ++i)
		{
			string s;
			cin >> s;
			if (i < n){
				mp[s]++;
				mp_1[s].push_back(1);
			}else if (i >= n and i < 2 * n){
				mp[s]++;
				mp_1[s].push_back(2);
			}else{
				mp[s]++;
				mp_1[s].push_back(3);
			}
		}
		vector <int > v(4);
		for (auto itr = mp.begin(); itr != mp.end(); itr++){
			if (itr->second == 1){
				v[mp_1[itr->first][0]] += 3;
			}else if (itr->second == 2){
				for (int val : mp_1[itr->first]){
					v[val]++;
				}
			}else if (itr->second == 3){
				continue;
			}
		}
		
		
		
		for (int i = 1; i < 4; i++){
			cout << v[i] << " ";
		}
		cout << endl;


	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
