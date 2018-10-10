#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
    set<int> o_r, o_c;
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            char c;
            cin >> c;
            if (c == 'S') {
                o_r.insert(i);
                o_c.insert(j);
            }
        }
    }
    cout << r*c - o_r.size() * o_c.size() << endl;
    return 0;
}
