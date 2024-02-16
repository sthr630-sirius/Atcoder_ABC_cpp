#include<iostream>
using namespace std;
int main(){
  int n, l;
  int a;
  int ans;
  
  cin >> n >> l;
  ans = 0;
  
  for (int i=0; i<n; i++){
      cin >> a;
      if (a >= l) ans++;
  }

  cout << ans << endl;

  return 0;
}  
