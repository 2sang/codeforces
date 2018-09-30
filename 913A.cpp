#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n, m;
    cin >> n >> m;
    if (n > 26) {
        cout << m << endl;
        return 0;
    }
    cout << m % (long long)(pow(2, n)) << endl;
    return 0;
}
