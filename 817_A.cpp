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
		string s;
		cin >> s;
		vector <int > arr(1000);
		if (s.length() > 5){
			cout << "NO" << endl;
			continue;
		}
		arr['T' - '0'] = 1;
		arr['i' - '0'] = 1;
		arr['u' - '0'] = 1;
		arr['m' - '0'] = 1;
		arr['r' - '0'] = 1;
		for(char i : s){
			--arr[i - '0'];
		}
		bool flag = false;
		for (int i : arr){
			if (i < 0 or i == 1){
				flag  = true;
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
