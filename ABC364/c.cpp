#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    long long x, y;
    long long eaten_x, eaten_y;
    int x_min, y_min;
    cin >> n >> x >> y;
    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) cin >> a.at(i);
    for(int i=0; i<n; i++) cin >> b.at(i);

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    eaten_x = 0;
    eaten_y = 0;

    for(int i=0; i<n; i++){
        eaten_x += a.at(i);
        x_min = i+1;

        if(eaten_x > x) break;
    }

    for(int i=0; i<n; i++){
        eaten_y += b.at(i);
        y_min = i+1;

        if(eaten_y > y) break;
    }

    cout << min(x_min, y_min) << endl;
    
    return 0;

}