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
		vector <int > v(n);
		bool flag = true;
		for (int &i : v) cin >> i;
		for (int i = 0; i < n - 1; ++i)
		{
			v[i] = v[i + 1] - v[i];
		}
		v.pop_back();
		int count_3 = 0;
		int count_2 = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if (v[i] == 3){
				count_3++;
			}else if(v[i] == 2){
				count_2++;
			}else if (v[i] > 3){
				flag = false;
				break;
			}
		}
		if ((count_2 <= 2 and count_3 == 0 and flag == true) || (count_3 <= 1 and count_2 == 0 and flag == true)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}