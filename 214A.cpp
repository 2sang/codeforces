#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n, m, ans=0;
    cin >> n >> m;
    for (int a = 0; a < 33; a++) {
        for (int b = 0; b < 33; b++) {
            if ((int)pow(a, 2) + b == n && (int)pow(b, 2) + a == m) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
