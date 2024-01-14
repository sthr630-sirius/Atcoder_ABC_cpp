#include<iostream>
using namespace std;
int main(){
    int k, x;
    int i_min, i_max;
    cin >> k >> x;

    i_min = max(-1000000, x-(k-1));
    i_max = min(1000000, x+(k-1));

    for (int i=i_min; i<=i_max; i++){
        cout << i << endl;
    }

    return 0;
    
}