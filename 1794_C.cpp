
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

const int N = 1e6;
const int p = 1e9 + 7;


int facm[N];


int addm (int x , int y){
	return  ((x % p) + (y % p)) % p;
}
int subm (int x , int y ){
	return ((x - y) % p + p) % p;
}
int mulm (int x , int y){
	return ((x % p) * (y % p)) % p;
}
int pwrm(int x , int y){
	int res = 1;
	while(y){
		if (y & 1) res = mulm(res, mulm(x , y));
		y >>= 1;
		x = mulm(x , x);
	}
	return res;
}
int invm (int x){
	return pwrm(x , p - 2);
}
int divm(int x , int y){
	return ((x % p) * (invm(y)) % p) % p;
}

void calc_fact(){
	facm[0] = 1;
	for (int i = 1; i <= N; i++){
		facm[i] = mulm(facm[i - 1] , i);
	}
}


int isfine(int val , int k){
	if (val >= k) return 1;
	else return -1;
}


int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();


	int tt;
	cin >> tt;

	for (int t = 1; t <= tt; t++){
		// Code here
		float n;
		cin >> n;
		vector <int> v(n + 1 , 0);
		for (int i = 1; i <= n; i++){
			cin >> v[i];
		}

		vector <int> ans(n + 1 , 1);
		
		for (int i = 2; i <= n; i++){
			int r = i - 1;
			int l = 1;
			int a = -1;
			while(l <= r){
				int mid = (l + r) / 2;
				int check = isfine(v[mid] , i - mid + 1);
				// cout << mid << endl;
				// cout << check << ' '  << v[mid] << ' ' << i - mid + 1<< endl;
				if (check == 1){
					a = i - mid + 1;
					r = mid - 1;
				}else{
					l = mid + 1;
				}
			}
			if (a == -1) ans[i] = 1;
			else ans[i] = a;
		}
		for (int i = 1; i <= n; i++){
			cout << ans[i] << ' ';
		}cout << endl;
		// cout << "Case# " << t << ": " << /* ans here */ << endl;
		
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}