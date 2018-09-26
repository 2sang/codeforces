#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long n, q, shops[100001];
    shops[0] = -1;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        shops[i] = x;
    }
    sort(shops+1, shops+n+1);
    cin >> q;
    for (long long i = 1; i <= q; i++) {
        long long x;
        cin >> x;
        cout << upper_bound(shops+1, shops+n+1, x) - (shops+1) << endl;
    }
    return 0;
}
