#include<iostream>
#include<vector>
using namespace std;
int count_sharp(vector<char> &block){
    int cnt;
    cnt = 0;
    for(int i=0; i<block.size(); i++){
        if(block[i] == '#') cnt++;
    }

    return cnt;
}

int main(){
    int n;
    string s;
    cin >> n;
    vector<vector<char>> field(n, vector<char>(n, '.'));
    int cnt, cnt_max;
    vector<char> block(6);
    
    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<n; j++){
            if(s[j] == '#') field[i][j] = '#';
        }
    }

    cnt_max = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // row j+5 < n
            if(j+5 < n){
                for(int k=0; k<6; k++) block[k] = field[i][j+k];
                cnt = count_sharp(block);    
                cnt_max = max(cnt_max, cnt);
            }

            // column
            if(i+5 < n){
                for(int k=0; k<6; k++) block[k] = field[i+k][j];
                cnt = count_sharp(block);
                cnt_max = max(cnt_max, cnt);
            }

            // diagonal
            if(i+5 < n && j+5 < n){
                for(int k=0; k<6; k++) block[k] = field[i+k][j+k];
                cnt = count_sharp(block);
                cnt_max = max(cnt_max, cnt);
            }

            // diagonal
            if(i+5 < n && j-5 > -1){
                for(int k=0; k<6; k++) block[k] = field[i+k][j-k];
                cnt = count_sharp(block);
                cnt_max = max(cnt_max, cnt);
            }
        }
    }

    if(cnt_max >= 4) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}