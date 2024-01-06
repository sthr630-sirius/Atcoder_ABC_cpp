#include<iostream>
using namespace std;
int main(){
    string s;
    int u2, b2;
    string u, b;
    cin >> s;
    u2 = stoi(s.substr(0, 2));
    b2 = stoi(s.substr(2, 2));

    if (1 <= u2 and u2 <= 12) u = "YM";
    else u = "YY";
    
    if (1 <= b2 and b2 <= 12) b = "YM";
    else b = "YY";

    if (u == "YM" and b == "YM") cout << "AMBIGUOUS" << endl;
    else if (u == "YM" and b == "YY") cout << "MMYY" << endl;
    else if (u == "YY" and b == "YM") cout << "YYMM" << endl;
    else if (u == "YY" and b == "YY") cout << "NA" << endl;

    return 0;

}