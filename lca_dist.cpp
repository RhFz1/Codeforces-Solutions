#include <bits/stdc++.h>
using namespace std;

const int N = 1e5, M = 20;

vector <int> gr[N];

int Par[N][M] , dep[N];


void dfs(int cur , int par){
	dep[cur] = dep[par] + 1;
	Par[cur][0] = par;
	for (int j = 1; j < M; j++){
		Par[cur][j] = Par[Par[cur][j - 1]][j - 1];
	}

	for (auto x : gr[cur]){
		if (x != par){
			dfs(x , cur);
		}
	}
}

int LCA(int u , int v){
	if (u == v) return u;

	if (dep[u] < dep[v]) swap(u , v);

	int diff = dep[u] - dep[v];

	for (int j = M - 1; j >= 0; j--){
		if ((diff >> j) & 1){
			u = Par[u][j];
		}
	}

	for (int j = M - 1; j >= 0; j--){
		if (Par[u][j] != Par[v][j]){
			u = Par[u][j];
			v = Par[v][j];
		}
	}
	return Par[u][0];
}

int distq(int u , int v){
	int lca = LCA(u , v);

	int ans = dep[u] + dep[v] - 2 * dep[lca];
	return ans;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();


	int n;
	cin >> n;

	for (int i = 1 ; i < n; i++){
		int x , y;
		cin >> x >> y;

		gr[x].push_back(y);
		gr[y].push_back(x);
	}

	dfs(1 , 0);

	cout << distq(5 , 3) << endl;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
