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
		int a,b;
		cin >> a >> b;
		if(a == 1){
			cout << b << endl;
		}else if (a == b){
			cout << 1 <<endl;
		}else{
			int val = (b - (a % b)) % b;
			int ans = 0;
			if(val >= a){
				
			}
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
	