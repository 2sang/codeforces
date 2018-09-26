#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int f[101];
    vector<int> seq;
    memset(f, 0, sizeof(f));
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        seq.push_back(x);
        f[x]++;
    }
    
    int nices = 0;
    for (int i = 1; i <= 100; i++) {
        if (f[i] == 1) {
            nices++;
        }
    }
    if (nices & 1) {
        bool left = true;
        bool possible = false;
        bool used = false;
        int ix;
        for (int i = 0; i <= 100; i++) {
            if (f[i] >= 3) {
                possible=true;
                ix = i;
            }
        }
        if (!possible) {
            cout << "NO" << endl;
            return 0;
        }
        cout << "YES" << endl;
        for (int i = 0; i < seq.size(); i++) {
            int x = seq[i];
            if (x == ix && !used) {
                if (left) {
                    cout << "A";
                    left = false;
                } else {
                    cout << "B";
                    left = true;
                }
                used = true;
                continue;
            }
            if (f[x] == 1) {
                if (left) {
                    cout << "A";
                    left = false;
                } else {
                    cout << "B";
                    left = true;
                }
            } else {
                cout << "B";
            }
            /*
            if (left) {
                cout << "A";
                left = false;
            } else {
                cout << "B";
                left = true;
            }
            */
        }

    // even nice numbers
    } else {
        cout << "YES" << endl;
        bool left = true;
        for (int i = 0; i < seq.size(); i++) {
            int x = seq[i];
            if (f[x] == 1) {
                if (left) {
                    cout << "A";
                    left = false;
                } else {
                    cout << "B";
                    left = true;
                }
            } else {
                cout << "B";
            }
        }
    }
    return 0;
}
