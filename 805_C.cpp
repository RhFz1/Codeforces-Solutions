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
		int n , k;
		cin >> n >> k;
		map <int , pair <int , int> > m;
		for (int i = 0; i < n; ++i)
		{
			int u;
			cin >> u;
			if (!m.count(u)){
				m[u].first = i;
				m[u].second = i;
			}
			else{
				m[u].second = i;
			}
		}
		while(k--){
			int a , b;
			cin >> a >> b;
			if (m.count(a) == 0 or m.count(b) == 0 or m[a].first > m[b].second){
				cout << "NO" << endl;
			}else{
				cout << "YES" << endl;
			}
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
