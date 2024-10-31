#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.rbegin(), b.rend());

    for(int i=0; i<n; i++){
        if(a[i] == b[1]){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;

}