#include <bits/stdc++.h>
using namespace std;
long long solve(){
	long long n;
	cin>>n;
	if(n % 2050 != 0)
	{
		return -1;
	}
	long long fit = n / 2050;
	int count = 0;
	while(fit){
		int rem = fit % 10;
		count += rem;
		fit /= 10;
	}
	return count;

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t = 1;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}

}