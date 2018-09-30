#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long n, k, f[150001], sums[150001], s[150001];
    f[0] = 0; sums[0] = 0; s[0] = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        f[i] = x;
        sums[i] = sums[i-1] + x;
    }
    for (int i = 1; i <= n-k+1; i++) {
        s[i] = sums[i+k-1] - sums[i-1];
    }
    cout << min_element(s+1, s+n-k+2) - s << endl;
    return 0;
}
