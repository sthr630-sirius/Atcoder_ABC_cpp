#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long aa, b;
    cin >> b;

    for (int i=1; i<20; i++){
        aa = 1;
        for (int j=0; j<i; j++){
            aa *= i;
        }

        if (aa == b){
            cout << i << endl;
            return 0; 
        }
    }

    cout << -1 << endl;
    return 0;
}