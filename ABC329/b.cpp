#include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    int first, second;
    cin >> n;
    first = 0;
    second = 0;
    for (int i=0; i<n; i++){
        cin >> a;
        if (a > first){
            second = first;
            first = a;
        } else if (a == first){
            first = a;
        } else if (a >= second){
            second = a;
        }
    }

    cout << second << endl;
    return 0;

}