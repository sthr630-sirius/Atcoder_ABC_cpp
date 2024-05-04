#include<iostream>
using namespace std;
int main(){
    int n, m;
    string s, t;
    int size_s, size_t;
    string t_front, t_back;

    cin >> n >> m;
    cin >> s >> t;
    
    size_s = s.size();
    size_t = t.size();
    t_front = t.substr(0, size_s);
    t_back = t.substr(size_t - size_s, size_s);

    if (s == t_front && s == t_back) cout << 0 << endl;
    else if (s == t_front && s != t_back) cout << 1 << endl;
    else if (s != t_front && s == t_back) cout << 2 << endl;
    else cout << 3 << endl;

    return 0;
    
}