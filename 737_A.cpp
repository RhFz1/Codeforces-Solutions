#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();
	cout << fixed << setprecision(10);
	int t = 1;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector < int > v(n);
		ll sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		int maxm = v[0];
		for (int i = 0; i < n; ++i)
		{
			if(maxm - v[i] <= 0){
				maxm = v[i];
			}
			sum += v[i];
		}
		cout << 1.0 * (sum - maxm)/(n - 1) + maxm <<endl;
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
