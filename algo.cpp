
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  vector <vector <int>> ans;
  sort(array.begin() , array.end());
  for(int i = 0; i < array.size() - 2; i++){
    int new_tar = targetSum - array[i];
    int lft = i + 1;
    int rht = array.size() - 1;
    while(lft < rht){
      if (array[lft] + array[rht] < new_tar){
        lft++;
      }else if (array[lft] + array[rht] > new_tar){
        rht--;
      }else {
        ans.push_back({array[i] , array[lft] , array[rht]});
        rht--;
        lft++;
      }
  }
}
  return ans;
}

int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    int n , targetSum;
    cin >> n >> targetSum;
    vector <int> v(n);
    for (auto &i : v) cin >> i;
    vector <vector <int >> ans;
    ans = threeNumberSum(v , targetSum);
    for (auto v : ans){
      for (int val : v){
        cout << val << ' ';
      }
      cout << endl;
    }
}
