
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
		string s1 , s2;
		cin >> s1 >> s2;
		int n = s1.length() , p = s2.length();
		int s = 11 , m = 71 , l = 131;
		float x = 10 , y = 10;
		float v1 = 0 , v2 = 0;
		for (int i = n - 1; i >= 0; i--){
			if (s1[i] == 'S') {
				v1 += s;
				x = 0.1;
			}
			else if (s1[i] == 'M') v1 += m;
			else if (s1[i] == 'L') v1 += l;
			else v1 *= x; 
		}
		for (int i = p - 1; i >= 0; i--){
			if (s2[i] == 'S'){
				v2 += s;
				y = 0.1;
			}
			else if (s2[i] == 'M') v2 += m;
			else if (s2[i] == 'L') v2 += l;
			else v2 *= y; 
		}
		
		if (v1 > v2) cout << ">" << endl;
		else if (v1 < v2) cout << "<" << endl;
		else cout << "=" << endl;
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}