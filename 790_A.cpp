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
		string s;
		cin >> s;
		if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
