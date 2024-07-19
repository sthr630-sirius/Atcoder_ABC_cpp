#include<iostream>
using namespace std;
int main(){
    int n, h, x;
    int p;
    cin >> n >> h >> x;
 
    for (int i=0; i<n; i++){
        cin >> p;
        if (h+p>=x){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}