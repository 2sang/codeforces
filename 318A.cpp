#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n, k, ans;
    cin >> n >> k;
    // n == Odd
    if (n & 1) {
        if (k > (n/2+1)) ans = 2*(k-n/2-1);
        else ans = 2*k-1;
    // n == Even
    } else {
        if (k > n/2) ans = 2*(k-n/2);
        else ans = 2*k-1;
    }
    cout << ans;
    return 0;
}
