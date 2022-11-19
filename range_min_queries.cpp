#include <bits/stdc++.h>
using namespace std;


struct segment_tree
{
	int n;
	
	vector <int> st;

	void init(int _n){
		this->n = _n;
		st.resize(4 * n , 0);
	}

	void build (int start , int end , vector <int> &v , int node){
		if (start == end){
			st[node] = v[start];
			return; 
		}

		int mid = (start + end) / 2;

		// Left subtree

		build(start , mid , v , 2 * node + 1);

		// Right subtree

		build(mid + 1 , end , v , 2 * node + 2);

		// Logic for sum queries

		st[node] = min(st[2 * node + 1] , st[2 * node + 2]); 

	}

	int query (int start , int end , int l , int r , int node){

		if (start > r || end < l){
			return 1e9;
		}
		if (start >= l  and end <= r){
			return st[node];
		}

		int mid = (start + end) / 2;

		int q1 = query(start , mid , l , r , 2 * node + 1);
		int q2 = query(mid + 1, end , l , r , 2 * node + 2);
		
		return min(q1 , q2);
	}

	void update(int start , int end , int index , int value , int node){

		if (start == end){
			st[node] = value;
			return;
		}

		int mid = (start + end) / 2;

		// Left Subtree

		if (index <= mid){
			update(start , mid , index , value , 2 * node + 1);
		}
		// Right Subtree
		else{
			update(mid + 1 , end , index , value , 2 * node + 2);
		}

		// Logic for sum Queries.

		st[node] = min(st[2 * node + 1], st[2 * node + 2]);

	}

	void update(int x , int y){
		update(0 , n - 1 , x , y , 0);
	}

	int query(int l , int r){
		return query(0 , n - 1 , l , r , 0);
	}

	void build (vector <int> &v){
		build(0 , n - 1 , v , 0);
	}
	
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n = 8;

	vector <int> v = {3 , 2 , 4 , 5 , 1 , 1 , 5, 3};

	segment_tree tree;

	tree.init(n);

	tree.build(v);

	tree.update(1 , 3);
	cout << tree.query(0 , 3) << endl;


	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
