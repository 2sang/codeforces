#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n, r[100];
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        r[i] = x;
    }
    if (r[n-1] == 15) {
        cout << "DOWN" << endl;
        return 0;
    }
    if (r[n-1] == 0) {
        cout << "UP" << endl;
        return 0;
    }
    if (n == 1) {
        cout << -1 << endl;
        return 0;
    }
    if (r[n-2] > r[n-1]) {
        cout << "DOWN" << endl;
    } else {
        cout << "UP" << endl;
    }
    return 0;
}
