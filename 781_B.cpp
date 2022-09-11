#include <bits/stdc++.h>
using namespace std;

int power(int a  ,int b){
	int res = 1;
	while(b){
		if(b & 1){
			res *= a;
		}
		b >>= 1;
		a *= a;
	}
	return res;
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
		int n;
		cin >> n;
		vector <int > v(n);
		map <int, int> mp;
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		for(const auto &item : v){
			mp[item]++;
		}
		auto most_freq_int =
            std::max_element(mp.begin(), mp.end(),
                 [] (const auto &x, const auto &y) {return x.second < y.second;});
		int freq = most_freq_int->second;
		if(n == 1){
			cout << 0 << endl;
		}
		else if(freq == n){
			cout << 0 << endl;
		}
		else{
			int temp = freq;
			int ans = n - temp;
			int i = 1;
			while(power(2,i) * temp <= n){
				i++;
			}
			if(power(2,i - 1) * temp == n){
				cout << ans + i - 1 << endl; 
			}else{
				cout << ans + i <<endl;
			}
		}

	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
