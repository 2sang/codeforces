#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
    int m, s;
    string mx="", mi="";
    cin >> m >> s;
    if (m == 1 && s == 0) {
        cout << "0 0" << endl;
        return 0;
    }
    if (m*9 < s || s == 0) {
        cout << "-1 -1" << endl;
        return 0;
    }
    int max_s = s, min_s = s;
    for (int i = 0; i < m; i++) {
        int mi = min(9, max_s);
        max_s -= mi;
        mx += to_string(mi);
    }
    
    for (int i = m-1; i >= 0; i--) {
        int thr = i*9;
        if (i == m-1 && min_s-1 <= thr) {
            mi += "1";
            min_s -= 1;
            continue;
        }
        if (thr <= min_s) {
            int rem = min_s - (thr);
            mi += to_string(rem);
            min_s -= rem;
        } else {
            mi += "0";
            min_s -= 0;
        }
    }
    
    cout << mi << endl;
    cout << mx << endl;

    return 0;
}
