#include <bits/stdc++.h>
using namespace std;
int binary_search(int n ,  vector <int > arr , int key){
	int l = 0;
	int h = n - 1;
	int ans = -1e9;
	while (l <= h){
		int mid = l + (h - l) / 2;
		if (arr[mid] <= 2 * key){
			ans = max(ans , mid);
			l = mid + 1;
		}if (arr[mid] > 2 * key){
			h = mid - 1;
		}
	}
	if (ans == -1e9){
		return -1;
	}else{
		return ans;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	vector <int > v = {1 , 3 ,  5 , 7 ,15};
	int key = 7;
	cout << binary_search(5 , v , key) << endl;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}

