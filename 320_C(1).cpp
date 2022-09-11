#include <bits/stdc++.h>
using namespace std;
double kadane(double a[],int n){
	double ans = 0,temp = 0;
	for (int i = 0; i < n; ++i)
	{
		temp += a[i];
		if(temp < 0) temp = 0;
		ans = max(ans,temp);
	}
	return ans;
}
double weakness(double x,int n,double a[]){
	double ans_1,ans_2;
	double b[n];
	for (int i = 0; i < n; ++i)
	{
		b[i] = a[i] - x;
	}
	ans_1 = kadane(b,n);
	for (int i = 0; i < n; ++i)
	{
		b[i] = -b[i];
	}
	ans_2 = kadane(b,n);
	return max(ans_2,ans_1);
}
double ternary(double d[],int n){
	double l = -1e4,r = 1e4;
	for(int i = 0; i< 100;i++){
		double mid_1 = (2*l + r)/3.0;
		double mid_2 = (l + 2*r)/3.0;
		if(weakness(mid_1,n,d) < weakness(mid_2,n,d)){
			r = mid_2;
		}else{
			l = mid_1;
		}
	}
	return r;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();
	int n;
	cin >> n;
	double d[n];
	for(int i = 0; i < n; i++){
		cin >> d[i];
	}
	if(n == 1){
		printf("0.00000000 \n");
	}else{
	printf("%.7f \n",ternary(d,n));
}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
