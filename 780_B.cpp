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
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for (int i = n - 1; i > 0; --i)
		{
			arr[i] -= arr[i - 1];
		}
		if(arr[n - 1] < 2){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
