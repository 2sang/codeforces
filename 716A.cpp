#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n, c;
    cin >> n >> c;
    long long ans=1, prev;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (i == 0) {
            prev = x;
            continue;
        }
        if (x - prev <= c) {
            ans++;
        } else {
            ans = 1;
        }
        prev = x;
    }
    cout << ans << endl;
    return 0;
}
