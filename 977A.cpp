#include <iostream>
using namespace std;
int solve();
int main(int argc, char *argv[]){
    bool submission=true;
    if (submission) {solve(); return 0;}
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int tc; cin >> tc; while (tc--) {solve();}
}

int solve() {
    long long n; int k;
    cin >> n >> k;
    while (k--) {
        int lastdigit = n%10;
        if (lastdigit == 0) n /= 10;
        else n--;
    }
    printf("%lld\n", n);
    return 0;
}
