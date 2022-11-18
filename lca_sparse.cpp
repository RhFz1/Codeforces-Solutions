#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 , M = 20;


vector <int> gr[N];

int Par[N][M] , depth[N];

int xr[N];

void dfs(int cur , int par){
	depth[cur] = depth[par] + 1;

	Par[cur][0] = par;

	xr[cur] = cur ^ xr[par];

	for (int j = 1; j < M; j++){
		Par[cur][j] = Par[Par[cur][j - 1]][j - 1];
	}

	for (auto x : gr[cur]){
		if (x != par){
			dfs(x , cur);
		}
	}
}


int LCA (int u , int v){
	if (u == v) return u;

	if (depth[u] < depth[v]) swap(u , v);

	int diff = depth[u] - depth[v];

	for (int i = M - 1; i >= 0; i--){
		if ((diff >> i) & 1){
			u = Par[u][i];
		}
	}
	for (int i = M - 1; i >= 0; i--){
		if (Par[u][i] != Par[v][i]){
			u = Par[u][i];
			v = Par[v][i];
		}
	}
	return Par[u][0];
}


int pathXor(int u , int v){

	int lca = LCA(u , v);

	int ls = xr[u];
	int rs = xr[v];
	int mi = xr[lca];
	int ans = (ls ^ mi) ^ (rs ^ mi) ^ lca;
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

	for (int i = 1; i < n; i++){
		int x , y;
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	
	dfs(1 , 0);

	cout << pathXor(3 , 5) << endl;

	cout << pathXor(4 , 5) << endl;
	
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
