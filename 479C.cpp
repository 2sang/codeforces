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
    int n;
    long long cur;
    vector<pair<long long, long long>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    cur = min(v[0].first, v[0].second);
    for (int i = 1; i < n; i++) {
        if (cur > v[i].second) {
            cur = v[i].first;
        } else {
            cur = v[i].second;
        }
    }
    cout << cur << endl;
    return 0;
}
