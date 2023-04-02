
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
		int n;
		cin >> n;
		vector <pair <int , int>> temp;
		for (int i = 0; i < n; i++){
			int x;
			cin >> x;
			temp.push_back({x , i + 1});
		}
		bool flag = false;
		pair <int , int> f1;
		for (int i = 0; i < n; i++){
			f1 = temp[i];
			// cout << f1.first << ' ' << f1.second + 1 << ' ' << n << endl;
			if (f1.second >= f1.first and f1.first <= n){
				flag = true;
				break;
			} 
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
		// cout << "Case# " << t << ": " << /* ans here */ << endl;
		
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}