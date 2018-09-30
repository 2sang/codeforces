#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    unsigned long long n, a[100001], ans=0;
    bool even=true;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a[i] = x;
        ans += x;
        if (ans & 1) even=false;
        else even=true;
    }
    if (even) {
        cout << ans << endl;
        return 0;
    }
    sort(a, a+n);
    for (long long i = 0; i < n; i++) {
        if (a[i] & 1) {
            ans -= a[i];
            cout << ans << endl;
            return 0;
        }
    }
    
    return 0;
}
