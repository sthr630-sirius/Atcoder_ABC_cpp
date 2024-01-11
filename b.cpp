#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  int ans;
  cin >> n;
  vector<int> p(n);
  ans = 0;
  for (int i=0; i<n; i++){
   cin >> p[i];
  }
      
  for (int i=1; i<n-1; i++){
    if ((p[i-1]<p[i]and p[i]<p[i+1]) or (p[i-1]>p[i]and p[i]>p[i+1])){
      ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
  
       
	 
	
