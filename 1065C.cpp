#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int solve();
int main(int argc, char *argv[]){
    bool submission=false;
    if (submission) {solve(); return 0;}
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int tc; cin >> tc; while (tc--) {solve();}
}
int solve() {
    long long n, k, a[200001], mincut;
    cin >> n >> k;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a[i] = x;
    }
    sort(a, a+n);
    mincut = a[0];
    
    return 0;
}
