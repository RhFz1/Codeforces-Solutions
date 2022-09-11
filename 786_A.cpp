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
	while (t--){
		int x , y;
		cin >> x >> y;
		float res = y / x;
		if ((y % x) != 0){
			cout << 0 << " " << 0 << endl;
		}else{
			cout << 1 << " " << y / x << endl;
		}

	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
