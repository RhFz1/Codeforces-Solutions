#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll a , ll b){
	ll res = 1;
	while (b){
		if(b & 1) res *= a;
		b >>= 1;
		a *= a;
	}
	return res;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	ll t = 1;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		ll n_2s = n / 2;
		ll n_1s = n % 2;
		if (abs(n_1s - n_2s) <= 1){
			if (n_1s > n_2s){
				while (n_2s--){
					cout << 1 << 2;
				}cout << 1;
				cout << endl;
			}else if (n_2s > n_1s) {
				while(n_1s--){
					cout << 2 << 1;
				}cout << 2 << endl;
			}else {
				while (n_2s--){
					cout << 2 << 1;
				}cout << endl;
			}
		} else {
			while (abs(n_1s - n_2s) > 1){
				n_1s += 2;
				n_2s--;
			}
			if (n_1s > n_2s){
				while (n_2s--){
					cout << 1 << 2;
				}cout << 1;
				cout << endl;
			}else if (n_2s > n_1s) {
				while(n_1s--){
					cout << 2 << 1;
				}cout << 2 << endl;
			}else {
				while (n_2s--){
					cout << 2 << 1;
				}cout << endl;
			}
		}


	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
