#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <iterator>
using namespace std;


int main(int argc, char *argv[]){
    int n, p, q;
    bool flags[101];
    memset(flags, 0, 101);
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        flags[x] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        flags[x] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!flags[i]) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
