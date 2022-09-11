#include <bits/stdc++.h>
using namespace std;
int pow(int a,int b){
	int res =1 ;
	while(b){
		if(b&1){
			res *=a;
		}
		a*=a;
		b>>=1;
	}
	return res;
}
int solve(){
	int n;
	cin>>n;
	if(n%7 == 0){
		return n;
	}else{
		int temp = n;
		int rem_1 = temp%10;
		temp /=10;
		int rem_2 = temp %10;
		int temp_1 = temp/10;
		int rem_3 = temp%10;
		for(int i = 0;i<10;i++){
			if(i*2 - temp ==0 || (i*2 - temp)%7==0){
				return temp*10 + i;
			}
		}
		for(int i = 0;i<10;i++){
			if(rem_1*2 -(rem_3*100 + i*10)==0 || (rem_1*2 -(rem_3*100 + i*10))%7==0){
				return rem_1 + i*10 + rem_3*100;
			}
		}
		for(int i =1;i<10;i++){
			if(rem_1*2 - (rem_2*10 + i*100) == 0 || (rem_1*2 - (rem_2*10 + i*100)) %7==0){
				return rem_1 + rem_2*10+i*100;
			}
		}
		// while(true){
		// 	if(temp*2 - rev != 0 || temp*2 -rev != 7){
		// 		if(temp<9){
		// 			temp++;
		// 		}else{
		// 			break;
		// 		}
		// 	}else{
		// 		ans += temp;
		// 		return ans;
		// 	}
		// }
		// while(true){
		// 	if(temp*2 - rev != 0 || temp*2 -rev != 7){

		// 	}
		// }
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
