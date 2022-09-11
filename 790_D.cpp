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
	while (t--) {
		int n , m;
		cin >> n >> m;
		vector <vector <int>> temp(n , vector <int> (m , 0));
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> temp[i][j];
			}
		}
		int ans = 0;
		int temp_val = -1e9;
		for (int i = 0; i < n; ++i)
		{
			
			for (int j = 0; j < m; ++j)
			{
				ans = temp[i][j];
				for (int k = 1; i + k < n && j + k < m; k++)
				{
					ans += temp[i + k][j + k];
				}
				for (int k = 1; i - k > -1 && j - k > -1; k++)
				{
					ans += temp[i - k][j - k];
				}
				for (int k = 1; i - k > -1 && j + k < m; k++)
				{
					ans += temp[i - k][j + k];
				}
				for (int k = 1; i + k < n && j - k > -1; k++)
				{
					ans += temp[i + k][j - k];
				}
				temp_val = max(temp_val , ans);
			}
			
		}
		cout << temp_val << endl;
		

	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
