#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    long long d[100001];
    d[0] = -1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        d[i] = x;
    }
    for (long long i = 1; i <= n; i++) {
        long long first=1, last=n, adj_l, adj_r, mind, maxd;
        adj_l = i-1; adj_r = i+1;
        if (i == 1) adj_l = 2;
        if (i == n) adj_r = n-1;
        mind = min(abs(d[i] - d[adj_l]), abs(d[i] - d[adj_r]));
        maxd = max(abs(d[i] - d[first]), abs(d[i] - d[last]));
        cout << mind << " " << maxd << endl;
    }
    return 0;
}
