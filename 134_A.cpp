#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) {
		string r1 , r2 ,s;
		cin >> r1;
		cin >> r2;
		s = r1 + r2;
		

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}