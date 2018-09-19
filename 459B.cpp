#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    long long n;
    vector<long long> b;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    long long maxdiff = b[n-1] - b[0];
    long long min_c = count(b.begin(), b.end(), b[0]);
    long long max_c = count(b.begin(), b.end(), b[n-1]);
    if (b[0] == b[n-1]) {
        cout << 0 << " " << n*(n-1)/2 << endl;
    }
    else {
        cout << maxdiff << " " << max_c*min_c << endl;
    }
    return 0;
}
