#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
int solve(int mat[][3],int n){
	int count=0;
	for(int i=0;i<n;i++){
		int ones=0;
		for (int j=0;j<3;j++){
			if(mat[i][j]==1){
				ones++;
			}
			}
		if(ones>=2){
			count++;
		}

		}
	return count;
	}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int k=0;
	int matrix[n][3];
	for (int i=0;i<n;i++){
		for (int j = 0; j < 3; ++j)
		{
			cin>>k;
			matrix[i][j]=k;
		}
	}
	cout<<solve(matrix,n);
}