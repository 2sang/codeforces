#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n, l, a, p=0, ans=0;
    cin >> n >> l >> a;
    if (n == 0) {
        cout << l/a << endl;
        return 0;
    }
    vector<pair<long long, long long>> v;
    for (long long i = 0; i < n; i++) {
        long long t, l2;
        cin >> t >> l2;
        v.push_back(make_pair(t, l2));
    }
    sort(v.begin(), v.end());
    p = v[0].first;
    ans += p/a;
    p += v[0].second;
    long long p_next_f, p_next_s;
    for (long long i = 1; i < n; i++) {
        p_next_f = v[i].first;
        p_next_s = v[i].second;
        ans += (p_next_f-p)/a;
        p = p_next_f + p_next_s;
    }
    ans += (l - p)/a;
    cout << ans << endl;
    return 0;
}
