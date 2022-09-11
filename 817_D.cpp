#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 2e5 + 10;
ll ans[N];
char a[N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll sum = 0;
		for (int i = 1; i <= n ; ++i)
		{
			cin >> a[i];
			ans[i] = 0;
			if (a[i] == 'L'){
				sum += (i - 1);
			}else 
				sum += (n - i);
		}
		int i = 1 , j = n , k = 1;
		while(i <= n / 2){
			if (a[i] == 'L'){
				sum -= (i - 1);
				sum += (n - i);
				a[i] = 'R';
				ans[k] = sum;
				k++;
			}
			if (a[j] == 'R'){
				sum -= (n - i);
				sum += (i - 1);
				a[i] = 'L';
				ans[k] = sum;
				k++;
			}
			i++;
			j--;
		}
		for (k; k <= n; k++){
			ans[k] = sum;
		}
		for (ll i = 1; i <= n; ++i)
		{
			cout << ans[i] << ' ';
		}
		cout << endl;
		
		
		


		


	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
