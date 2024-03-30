#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if (x<y){
        if (y-x <= 2) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else{
        if (x-y <= 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;

}