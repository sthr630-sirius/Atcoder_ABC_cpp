#include<iostream>
using namespace std;
int main(){
    int n;
    int x, y;
    int sum_x, sum_y;
    cin >> n;
    sum_x = 0;
    sum_y = 0;
    for (int i=0; i<n; i++){
        cin >> x >> y;
        sum_x += x;
        sum_y += y;
    }

    if (sum_x > sum_y) cout << "Takahashi" << endl;
    else if (sum_x < sum_y) cout << "Aoki" << endl;
    else cout << "Draw" << endl;

    return 0;

}