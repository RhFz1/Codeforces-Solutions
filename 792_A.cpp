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
		int temp = n;
		int length = 0;
		int min_val = 1e9;
		while(temp){
			min_val = min(min_val , temp % 10);
			temp /= 10;
			length++;
		}
		if (length == 2 and n % 100 == min_val){
			cout << min_val << endl;
		}else if (length == 2 and n % 100 != min_val){
			cout << n % 10 << endl;
		}else{
			cout << min_val << endl;
		}


	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
