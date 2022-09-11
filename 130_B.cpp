#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n , q;
	cin >> n >> q;
	vector <long long > v(n);
	for (auto &i : v) cin >> i;
	sort(v.begin(),v.end(),greater<int>());
	for (int i = 1; i < n; ++i)
	{
		v[i] += v[i - 1];
	}
	while(q--){
		int x , y;
		cin >> x >> y;
		if (x - y - 1 >= 0){
			cout << v[x - 1] - v[x - y - 1] << endl;
		}else{
			cout << v[x - 1] << endl;
		}
	}
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
