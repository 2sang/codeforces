#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    int m, s;
    string st = "";
    string mx, mn;
    cin >> m >> s;
    for(int i = m-1; i >= 0; i--) {
        if (s-i < 0) {
            cout << "-1 -1" << endl;
            return 0;
        }
        int d = min(9, s-i);
        st += to_string(d);
        s -= d;
    }
    mx = st;
    reverse(st.begin(), st.end());
    mn = st;
    cout << mn << " " << mx << endl;
    return 0;
}
