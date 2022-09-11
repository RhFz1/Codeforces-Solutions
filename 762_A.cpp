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
		int n = s.length();
		if (n % 2 == 1){
			cout << "NO" << endl;
		}else{
			int j = n / 2;
			bool flag = false;
			for (int i = 0; i < n / 2; ++i)
			{
				if (s[i] != s[i + n / 2]){
					flag = true;
					break;
				}
			}
			if (flag == false){
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl;
 			}
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
