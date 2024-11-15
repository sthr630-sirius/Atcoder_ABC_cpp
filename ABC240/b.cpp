#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    int a;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; i++){
        cin >> a;
        st.insert(a);
    }

    cout << st.size() << endl;

    return 0;

}