#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> prise(3);
    int idx;
    string color;
    for(int i=0; i<3; i++) cin >> prise[i];
    cin >> color;
    
    if(color == "Red") idx = 0;
    if(color == "Green") idx = 1;
    if(color == "Blue") idx = 2;
    prise.erase(prise.begin()+idx);
    sort(prise.begin(), prise.end());

    cout << prise[0] << endl;

    return 0;

}