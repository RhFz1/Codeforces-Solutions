#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int i = 0;
		int day = 0;
		while(i < s.length()){
			set <char > pi;
			while(pi.size() <= 3 and i < s.length()){
				pi.insert(s[i]);
				if (pi.size() == 4){
					pi.erase(s[i]);
					break;
				}
				i++;
			}
			day++;
		}
		cout << day << endl;
		
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
