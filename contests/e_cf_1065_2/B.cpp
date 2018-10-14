#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int solve();
int main(int argc, char *argv[]){
    bool submission=true;
    if (submission) {solve(); return 0;}
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int tc; cin >> tc; while (tc--) {solve();}
}

int solve() {
    long long n=0, m=0, t=n;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++) {
        long long comp = i*(i-1)/2;
        if (m <= comp) { 
            t = i;
            break;
        }
    }
    if (m == 0) t = 0;
    long long minval;
    if (m >= (n+1)/2) minval = 0;
    else minval = n - 2*m;
    cout << minval << " " << n-t << endl;
    return 0;
}
