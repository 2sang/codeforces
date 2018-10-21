#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int solve();
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool submission=true;
    if (submission) {solve(); return 0;}
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int tc; cin >> tc; while (tc--) {solve();}
}

int solve() {
    int n;
    int freq[300001], ans;
    cin >> n;
    int l = 1, r = 0;
    for (int i = 0; i < n; i++) {
        char c; int x;
        cin >> c >> x;
        if (c == 'L') {
            freq[x] = --l;
        }
        else if (c == 'R') {
            freq[x] = ++r;
        }
        else {
            cout << min(freq[x]-l, r-freq[x]) << endl;
        }
    }
    return 0;
}
