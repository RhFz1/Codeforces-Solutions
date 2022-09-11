#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int> array) {
  int n = array.size();
  bool flag = array[0] >= array[n - 1];
  for (int i = 0; i < n - 1; i++){
    if (flag){
      if (array[i] < array[i + 1]){
        return false;
      }
    }else{
      if (array[i] > array[i + 1]){
        return false;
      }
    }
  }
  return true;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
  #endif

  cout << isMonotonic({-1 , -5 , -10 , -20 , -1000 , -1000 , 10001});
  return 0;
}