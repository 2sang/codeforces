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
    int n, r, d, ans=0;
    vector<int> v;
    cin >> n >> r;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1)
            v.push_back(i);
    }
    d = r-1;
    int si = upper_bound(v.begin(), v.end(), d) - v.begin();
    int cur = v[si];
    cout << "si: " << si << ", cur: " << cur << endl;
    ans++;
    while (v[si] != n-1) {
        cout << "cur+2d: " << cur+2*d << endl;
        si = upper_bound(v.begin(), v.end(), cur+2*d) - v.begin();
        cur = v[si];
        cout << "si: " << si << ", cur: " << cur << endl;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
