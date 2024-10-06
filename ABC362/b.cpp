#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a(2), b(2), c(2);
    vector<int> edges(3);
    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];
    cin >> c[0] >> c[1];

    edges[0] = pow(b[0]-a[0], 2) + pow(b[1]-a[1], 2);
    edges[1] = pow(c[0]-b[0], 2) + pow(c[1]-b[1], 2);
    edges[2] = pow(a[0]-c[0], 2) + pow(a[1]-c[1], 2);

    sort(edges.begin(), edges.end());

    if(edges[2] == edges[0] + edges[1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;

}