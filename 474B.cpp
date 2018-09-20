#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<long long> sums, worm_label;
    long long n, m;
    sums.push_back(0);
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sums.push_back(sums[i] + x);
    }
    cin >> m;
    for (long long i = 0; i < m; i++) {
        int label;
        cin >> label;
        cout << lower_bound(sums.begin(), sums.end(), label) - sums.begin() << endl;
    }
    return 0;
}
