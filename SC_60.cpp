
#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
	int n, m;
	cin >> n >> m;
	bug(n, m);
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) {
		int n , k;
		cin >> n >> k;
		vector <int> v(n);
		for (auto &i : v)cin >> i;
		sort(v.begin() , v.end());
		vector <int> kvs;
		for (int j = 1; j < v[0]; j++){
			kvs.push_back(j);
		}
		for (int i = 0; i < n - 1; i++){
			if (v[i + 1] - v[i] > 1){
				for(int j = v[i] + 1; j < v[i + 1]; j++){
					kvs.push_back(j);
				}
			}
		}
		int ss = kvs.size();
		int temp = v[n - 1];
		int score = 0;
		if (k <= 1){
			if (ss == 0);
			else score += temp - kvs[0]; 
		}else {
				int glb = 2 * n;
				if (ss == 0){
					k--;
					for (int i = 1; i <= k; i++){
						score += (glb - (temp + i));
					}
				}else if (ss == 1){
					score += temp - kvs[0];
					k--;
					for (int i = 1; i <= k; i++){
						score += (glb - (temp + i));
					}
				
				}else if (ss >= 2) {
					int cnt = 1;

					if (glb - (temp + cnt) > 2 * temp - (kvs[0] + kvs[1])){
						score += (glb - (temp + cnt));
						k -= 2;
						cnt++;
						int j = 0;
						int i;
						for (i = 1; i <= k and j < ss; i++){
							if (temp + cnt < kvs[j]){
								score += (glb - (temp + cnt));
								cnt++;
							}else {
								score += (glb - kvs[j]);
								j++;
							}
						}
						if (i != k){
							for (int j = i; j <= k; j++){
								score += (glb - (temp + cnt));
								cnt++;
							}
						}
					}else {
						int i;
						for (i = 1; i <= ss and i <= k; i++){
							score += temp - kvs[i - 1];
						}
						if (i != k){
							k--;
							for (int j = i; j <= k; j++){
								score += (glb - (temp + j));
							}
						}else;
					}
				}
			}
			cout << score << endl;
		}
	



	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}