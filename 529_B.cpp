#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n;
	cin>>n;
	vector <int> v(n);
	for(int i = 0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i = 0; i<n-1; i+=2){
		ans += (v[i+1] - v[i]);
	}
	cout << ans;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
