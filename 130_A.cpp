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
		vector <int> v(n);
		for(auto &i : v) cin >> i;
		int temp = 0;
		for (int i : v){
			temp += i;
		}
		if (m >= temp){
			cout << 0 << endl;
		}else{
			cout << temp - m << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
