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
		int n;
		cin >> n;
		string s1 , s2;
		cin >> s1;
		cin >> s2;
		bool flag = false;
		for (int i = 0; i < n; ++i)
		{
			if ((s1[i] == 'B' and s2[i] == 'G') or (s1[i] == 'G' and s2[i] == 'B')){
				continue;
			}
			if (s1[i] != s2[i]){
				flag = true;
				break;
			}
		}
		if (flag){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
