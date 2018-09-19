#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n, x;
    int ans=0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        if (x%i == 0 and x/i <= n) ans++;
    }
    cout << ans << endl;
    return 0;
}
