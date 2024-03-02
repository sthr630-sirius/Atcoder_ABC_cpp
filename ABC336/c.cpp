#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    string ans;
    int r;
    
    cin >> n;
    ans = "";

    n = n-1;

    while (n>=5){
        r = n % 5;
        ans = to_string(2*r) + ans;
        n = n / 5;
    }

    ans = to_string(2*n) + ans;

    cout << stoll(ans) << endl;

    return 0;

}