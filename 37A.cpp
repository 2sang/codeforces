#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int t[1001];
    fill(t, t+1001, 0);
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        t[x]++;
    }
    int maxel = *max_element(t+1, t+1001);
    int zeros = count(t+1, t+1001, 0);
    cout << maxel << " " << 1000 - zeros << endl;
    return 0;
}
