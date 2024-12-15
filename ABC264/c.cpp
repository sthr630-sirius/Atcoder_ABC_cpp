#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
int main(){
    int h1, w1, h2, w2;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));

    for(int i=0; i<h1; i++){
        for(int j=0; j<w1; j++) cin >> a[i][j];
    }

    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    vector<int> b_reshaped;

    for(int i=0; i<h2; i++){
        for(int j=0; j<w2; j++) cin >> b[i][j];
    }
    for(auto bi:b){
        for(auto bij:bi) b_reshaped.push_back(bij);
    }
    
    int h_bit, w_bit;
    int idx;
    bool is_ok;
    is_ok = false;

    for(int h_bit=0; h_bit<(1<<h1); h_bit++){
        for(int w_bit=0; w_bit<(1<<w1); w_bit++){
            bitset<10> h(h_bit);
            bitset<10> w(w_bit);
            if(h.count() == h2 && w.count() == w2){
                idx = 0;
                for(int i=0; i<h1; i++){
                    for(int j=0; j<w1; j++){
                        if(h_bit & (1<<i) && w_bit & (1<<j)){
                            if(a[i][j] == b_reshaped[idx]) idx++;
                        }
                    }
                }
                if(idx == h2*w2) is_ok = true;
            }
        }
    }
    
    if(is_ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}