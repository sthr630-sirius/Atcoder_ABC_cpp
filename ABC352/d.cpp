#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  vector<int> num_idx(n);
  set<int> target;
  int ans;
  
  for(int i=0; i<n; i++) cin >> p[i];
  for(int i=0; i<n; i++){
    num_idx[p[i]-1] = i;
  }

  for (int i=0; i<k; i++){
    target.insert(num_idx[i]);
  }

  auto minItem = target.begin();
  auto maxItem = target.rbegin();

  ans = *maxItem - *minItem;
  
  for (int i=k; i<n; i++){
    target.erase(num_idx[i-k]);
    target.insert(num_idx[i]);

    auto minItem = target.begin();
    auto maxItem = target.rbegin();
  
    ans = min(ans, *maxItem - *minItem);  
  }
  
  cout << ans << endl;
  
  return 0;
  
}
