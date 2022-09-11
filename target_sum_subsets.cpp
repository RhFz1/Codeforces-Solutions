#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n , k;
	cin >> n >> k;
	
	vector <int > v(n);
	
	for (auto &i : v) cin >> i;
	
	int dp[n + 1][k + 1];
	
	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= k; j++){
			if (i == 0 && j == 0){
				dp[i][j] = 1;
			}else if (i == 0){
				dp[i][j] = 0;
			}else if (j == 0){
				dp[i][j] = 1;
			}else{
				if (dp[i - 1][j] == 1){
					dp[i][j] = 1;
				}else{
					int val = j - v[i - 1];
					if (val >= 0){
						dp[i][j] = dp[i - 1	][val];
					}else{
						dp[i][j] = 0;
					}
				}
			}
		}
	}
	cout << dp[n][k] << endl;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
