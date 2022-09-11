#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n;
	cin>>n;
	vector <int> v(n);
	for(int i = 0; i<n; ++i){
		cin>>v[i];
	}
	int t1=0;int t2= 0;int t3 = 0;
	for(int i = 0; i<n; ++i){
		if(v[i]==1){
			t1++;
		}else if(v[i]==2){
			t2++;
		}else{
			t3++;
		}

	}
	int number_of_teams = min(t1,t2);
	number_of_teams = min(number_of_teams,t3);

	cout<<number_of_teams<<endl;
	vector <int> val;
	int c1=0;int c2=0;int c3=0;
	int i1=0;int i2 =0;int i3 =0;
	for(int j = 0;j < number_of_teams; ++j){
		for(int i = 0; i<n; i++){
			if(c1 < 1 && v[i] == 1){
				v[i] =0;
				i1 = i+1;
				c1++;
			}else if(c2 < 1 && v[i]==2){
				v[i] =0;
				i2 = i+1;
				c2++;
			}else if(c3 < 1 && v[i] ==3){
				v[i] =0;
				i3 = i + 1;
				c3++;
			}
		}
		cout<<i1<<" "<<i2<<" "<<i3<<endl;
		c1 = c2 = c3 = 0;
}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
