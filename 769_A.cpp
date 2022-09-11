#include <bits/stdc++.h>
using namespace std;
string solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int zero =0;int one =0;
	for(int i = 0;i <s.length(); i++){
		if(s[i] == '0'){
			zero++;
	}else if(s[i] == '1'){
		one++;
	}}
	if(n>=3){
		return "NO";
	}else if(n==1){
		return "YES";
	}else if(n==2){
		if(zero==one){
			return "YES";
		}else{
			return "NO";
		}
	}
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
