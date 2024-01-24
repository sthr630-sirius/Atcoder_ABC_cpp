#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    if (b == 1){
        cout << 0 << endl;
    } else if ((b-1)%(a-1) == 0){
        cout << (b-1)/(a-1) << endl;
    } else{
        cout << (b-1)/(a-1) + 1 << endl;
    }

    return 0;
}


/*
 a + (n-1)*(a-1) >= b
 a + an-a -n + 1= b
 (a-1) n = b-1
*/