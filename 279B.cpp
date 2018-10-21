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
    long long n, t;
    long long a[10001], s[10001];
    cin >> n >> t;
    s[0] = 0;
    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        a[i] = x;
        s[i] = s[i-1] + x;
    }
    
    long long maxbooks = 0;
    for (long long i = 1; i <= n; i++) {
        cout << "i: " << i << endl;
        if (maxbooks >= n-i+1) break;
        if (s[i+maxbooks] - s[i-1] >= t) continue;
        long long books = 0;
        
        for (long long j = i; j <= n; j++) {
            cout << "j: " << j << endl;
            if (s[j] - s[i-1] > t) {
                break;
            }
            books++;
        }
        if (books > maxbooks) maxbooks = books;
    }
    cout << maxbooks << endl;
    return 0;
}
