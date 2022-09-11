#include <bits/stdc++.h>
using namespace std;
int modulo_sum(vector <int > v){
	int n = v.size();
	int res = 0;
	for(int i = 0; i < n - 1; ++i){
		res += abs(v[i] - v[i + 1]);
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
	while (t--){
		int n;
		cin >> n;
		vector <int > v1(n),v2(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v1[i];
		}for (int i = 0; i < n; ++i)
		{
			cin >> v2[i];
		}
		int val = -1;
		for (int i = 0; i < n - 1; ++i)
		{
			val = -1;
			int ans = abs(v1[i] - v1[i + 1]);
			for (int j = 0; j < n; ++j)
			{
				if(abs(v1[i] - v2[j]) < ans){
					val = j;
				}
			}
			if (val != -1){
				int temp = v1[i + 1];
				v1[i + 1] = v2[val];
				v2[val] = temp; 
			}
		}
		int val1 = modulo_sum(v1);
		int val2 = modulo_sum(v2);
		cout << val2 + val1 << endl;
}
cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
}