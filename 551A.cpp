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
    int n, a[2001], b[2001];
    a[0] = b[0] = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i] = b[i] = x;
    }
    sort(b+1, b+n+1, greater<int>());
    for (int i = 1; i <= n; i++) {
        cout << find(b+1, b+n+1, a[i]) - (b) << " ";
    }
    cout << endl;
    return 0;
}
