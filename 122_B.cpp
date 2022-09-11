#include <bits/stdc++.h>
using namespace std;
int solve(){
	string s;
	cin>>s;
	int cnt0 =0,cnt1=0;
	for(int i =0;i<s.length();i++){
		if(s[i] == '0'){
			cnt0++;
		}else cnt1++;
	}
	if(cnt1==cnt0){
		return cnt1-1;
	}else if(cnt1>cnt0){
		return cnt0;

	}else return cnt1;

}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--){
		cout<<solve()<<endl;
	}


	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
