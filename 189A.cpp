#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[4001];
    memset(dp, 0, sizeof(dp));
    dp[0] = -1;
    int ap, bp, cp;
    for (int i = 1; i <= n; i++) {
        ap=0; bp=0; cp=0;
        if (i-a >= 0 && dp[i-a] != 0) ap = dp[i-a]+1;
        if (i-b >= 0 && dp[i-b] != 0) bp = dp[i-b]+1;
        if (i-c >= 0 && dp[i-c] != 0) cp = dp[i-c]+1;
        
        if (i-a == 0) ap = 1;
        if (i-b == 0) bp = 1;
        if (i-c == 0) cp = 1;
        dp[i] = max(max(ap, bp), max(cp, 0));
    }
    int ans = dp[n];
    cout << ans << endl;
    return 0;
}
