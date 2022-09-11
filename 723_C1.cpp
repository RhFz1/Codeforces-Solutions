#include <bits/stdc++.h>
using namespace std;
#define ll long long 
priority_queue <ll,vector <ll>,greater<ll> > q;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();
	ll n , i;
	cin >> n;
	ll ans = 0;
	ll sum = 0;
	for (i = 1; i <= n; ++i){
		int x;
		cin >> x; 
		if (x >= 0){
			sum += x;
			ans++;
			q.push(x);
		}else{
			if ((sum + x) >= 0){
				sum += x;
				ans++;
				q.push(x);
			}else{
				if(!q.empty() and (x > q.top())){
					sum -= q.top();
					q.pop();
					q.push(x);
					sum += x;
				}
			}
		}
	}
	cout << ans << endl;


	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
