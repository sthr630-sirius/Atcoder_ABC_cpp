#include<iostream>
#include<vector>
using namespace std;

int overlap_length(int a_l, int a_u, int b_l, int b_u){
    
    int len;
    
    if(a_l <= b_l){
        if(a_u <= b_l) len = 0;
        else len = min(a_u, b_u) - b_l; 
    }

    return len;
}

int main(){
    int x_l, y_l, z_l, x_u, y_u, z_u;
    int u_l, v_l, w_l, u_u, v_u, w_u;
    
    int x_overlap, y_overlap, z_overlap;
    int ans;
    
    cin >> x_l >> y_l >> z_l >> x_u >> y_u >> z_u;
    cin >> u_l >> v_l >> w_l >> u_u >> v_u >> w_u;

    x_overlap = overlap_length(x_l, x_u, u_l, u_u);
    y_overlap = overlap_length(y_l, y_u, v_l, v_u);
    z_overlap = overlap_length(z_l, z_u, w_l, w_u);

    ans = x_overlap * y_overlap * z_overlap;

    if(ans > 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}