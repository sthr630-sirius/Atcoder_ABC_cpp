#include<iostream>
using namespace std;
int main(){
    int n, d;
    int width;
    cin >> n >> d;
    width = 2*d + 1;
    if (n%(width) == 0){
        cout << n/(width) << endl;
    } else{
        cout << n/(width)+1 << endl;
    }

    return 0;
}