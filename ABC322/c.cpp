#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    int j;
    cin >> n >> m;
    vector<int> a(m);
    
    for (int i=0; i<m; i++) cin >> a[i];
    //for (auto& ai : a) cout << ai << endl;

    j = 0;

    for (int i=1; i<=n; i++){
        if (i<=a[j]){
            //cout << "test:" << a[j] << " " << "i:" << i << endl;
            cout << a[j]-i << endl;
        } else{
            j++;
            //cout << "test:" << a[j] << " " << "i:" << i << endl;
            cout << a[j]-i << endl;
        }
    }

    return 0;

}