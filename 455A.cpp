#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main(int argc, char *argv[]){
    long long dp[100001], c[100001];
    long long n;
    memset(c, 0, sizeof(c));
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        c[x]++;
    }
    dp[0] = 0; dp[1] = c[1];
    for (long long i = 2; i <= 100000; i++) {
        dp[i] = max(dp[i-2] + c[i]*i, dp[i-1]);
    }
    cout << dp[100000] << endl;
    return 0;
}
