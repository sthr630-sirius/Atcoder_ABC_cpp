#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, k;
    long long after_a, after_b;
    long long zero;
    cin >> a >> b >> k;
    zero = 0;
    after_a = max(zero, a-k);
    k = max(zero, k-a);
    after_b = max(zero, b-k);
    cout << after_a << " " << after_b << endl;
    return 0;

}