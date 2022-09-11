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
		int b_cnt = 0 , a_cnt = 0;
		bool flag = false;
		int i = 0;
		while (i < n){
			if (s[i] == 'b'){
				b_cnt = 0;
				while(s[i] == 'b' and i < n){
					b_cnt++;
					i++;
				}
				if(b_cnt == 1){
					flag = true;
					break;
				}
			}else{
				a_cnt = 0;
				while(s[i] == 'a' and i < n){
					a_cnt++;
					i++;
				}
				if (a_cnt == 1){
					flag = true;
					break;
				}
			}
		}

		if (flag == true){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
