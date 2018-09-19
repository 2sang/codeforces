#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    long long ans = 0;
    int cur = 1;
    for (int i = 0; i < m; i++) {
        long long target;
        cin >> target;
        if (target == cur) continue;
        if (target > cur) ans += target - cur;
        else ans += n - cur + target;
        cur = target;
    }
    cout << ans << endl;
    return 0;
}
