#include<iostream>
#include<vector>
using namespace std;
int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<string>> field(h, vector<string>(w));
    int x, y;
    string d;
    x = 0;
    y = 0;
    d = "U";
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            field[i][j] = ".";
        }
    }
    
    for (int i=0; i<n; i++){
        if (field[y][x] == "."){
            field[y][x] = "#";
            if (d == "U"){
                d = "R";
                x = (x+1)%w;
            }else if (d == "R"){
                d = "D";
                y = (y+1)%h;
            }else if (d == "D"){
                d = "L";
                x = ((x-1) + w)%w;
            }else if (d == "L"){
                d = "U";
                y = ((y-1) + h)%h;
            }
        }else if (field[y][x] == "#"){
            field[y][x] = ".";
            if (d == "U"){
                d = "L";
                x = ((x-1)%w + w)%w;
            }else if (d == "L"){
                d = "D";
                y = (y+1)%h;
            }else if (d == "D"){
                d = "R";
                x = (x+1)%w;
            }else if (d == "R"){
                d = "U";
                y = ((y-1)%h + h)%h;
            }
        }
    }
    
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            cout << field[i][j];
        }
        cout << endl;
    }

    return 0;

}