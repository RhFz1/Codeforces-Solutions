#include <bits/stdc++.h>
using namespace std;
int solve(){
	int n;
	cin >> n;
	vector <int > v(n);
	for(int i =0;i<n;i++){
		cin >> v[i];
	}
	map <int,int> mp;
	int ans = -1;
	for(int i = 0; i<n; i++){
		auto itr = mp.find(v[i]);
		if(itr != mp.end()){
			ans = max(ans,n - (i - itr->second));
		}
		mp[v[i]] = i;
	}
	return ans;
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
		cout<<solve()<<endl;
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
