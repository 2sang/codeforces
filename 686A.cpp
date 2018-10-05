#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n, x, ans=0;
    cin >> n >> x;
    for (long long i = 0; i < n; i++) {
        char op;
        long long y;
        cin >> op >> y;
        if (op == '+') x+=y;
        else {
            if (x >= y) {
                x -= y;
            } else {
                ans++;
            }
        }
    }
    cout << x << " " << ans << endl;
    return 0;
}
