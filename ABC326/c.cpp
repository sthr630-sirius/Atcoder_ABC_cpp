#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool upper_isOk(vector<int>& a, int mid, int target){
  if (a[mid] < target) return true;
  else return false;
}

int upper_binary_search(vector<int>& a, int target){
  int l, r, mid;
  l = -1;
  r = a.size();
  while (l+1 < r){
    mid = (l+r)/2;
    if (upper_isOk(a, mid, target)) l = mid;
    else r = mid;
  }

  return l;
  
}

bool lower_isOk(vector<int>& a, int mid, int target){
  if (target <= a[mid]) return true;
  else return false;
}


int lower_binary_search(vector<int>& a, int target){
  int l, r, mid;
  l = -1;
  r = a.size();
  while (l+1 < r){
    mid = (l+r)/2;
    if (lower_isOk(a, mid, target)) r = mid;
    else l = mid;
  }

  return r;
  
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  int target;
  int lower, upper, ans;

  for (int i=0; i<n; i++){
    cin >> a[i];
  }

  ans = 0;
  
  sort(a.begin(), a.end());

  for (int i=0; i<n; i++){
    target = a[i]+m;
    upper = upper_binary_search(a, target);

    target = a[i];
    lower = lower_binary_search(a, target);

    ans = max(ans, upper-lower+1);
  }

  cout << ans << endl;

  return 0;
  
}
