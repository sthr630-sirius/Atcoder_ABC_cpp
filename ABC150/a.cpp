#include<iostream>
using namespace std;
int main(){
    int k;
    long long x;
    cin >> k >> x;
    if (500*k >= x){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;

}