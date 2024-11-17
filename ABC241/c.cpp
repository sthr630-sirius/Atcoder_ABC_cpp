#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    vector<vector<char>> field(n, vector<char>(n, '.'));
    int cnt;
    vector<char> row(n);
    vector<char> column(n);
    vector<char> digit(6);
    bool is_ok;

    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<n; j++){
            if(s[j] == '#') field[i][j] = '#';
        }
    }

    is_ok = false;

    for(int i=0; i<n; i++){
        row = field[i];
        cnt = 0;
        for(int j=0; j<6; j++){
            if(row[j] == '#') cnt++;
        }
        if(cnt >= 4) is_ok = true;

        for(int j=0; j<n-6; j++){
            if(row[j+6] == '#') cnt++;
            if(row[j] == '#') cnt--;
            if(cnt >= 4) is_ok = true;
        }
    }

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++) column[i] = field[i][j];
        cnt = 0;
        for(int i=0; i<6; i++){
            if(column[i] == '#') cnt++;
        }
        if(cnt >= 4) is_ok = true;

        for(int i=0; i<n-6; i++){
            if(column[i+6] == '#') cnt++;
            if(column[i] == '#') cnt--;
            if(cnt >= 4) is_ok = true;
        }
    }

    for(int i=0; i<n-6+1; i++){
        for(int j=0; j<n-6+1; j++){
            //cout << "i: " << i << " j: " << j << " i+5: " << i+5 << " j+5: " << j+5 << endl;
            for(int k=0; k<6; k++) digit[k] = field[i+k][j+k];
            cnt = 0;

            //for(auto ki:digit) cout << ki << " ";
            //cout << endl;

            for(int k=0; k<6; k++){
                if(digit[k] == '#') cnt++;
            }
            if(cnt >= 4) is_ok = true;
        }
    }

    for(int i=0; i<n-6+1; i++){
        for(int j=n-1; j>4; j--){
            //cout << "i: " << i << " j: " << j << " i+5: " << i+5 << " j-5: " << j-5 << endl;
            for(int k=0; k<6; k++) digit[k] = field[i+k][j-k];
            cnt = 0;

            //for(auto ki:digit) cout << ki << " ";
            //cout << endl;

            for(int k=0; k<6; k++){
                if(digit[k] == '#') cnt++;
            }
            if(cnt >= 4) is_ok = true;
        }
    }

    /*
    for(auto si:field){
        for(auto sii:si){
            cout << sii << " ";
        }
        cout << endl;
    } 
    */

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}