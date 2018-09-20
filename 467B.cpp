#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<long long> nums;
    int n, m, k, ans=0;
    cin >> n >> m >> k;
    for (int i = 0; i <= m; i++) {
        long long x;
        cin >> x;
        nums.push_back(x);
    }
    long long fedor = nums[m];
    for (int i = 0; i < m; i++) {
        int differ = 0;
        long long exor = fedor ^ nums[i];
        while (exor) {
            if (exor & 1) differ++;
            exor = exor >> 1;
        }
        if (differ <= k) ans++;
    }
    cout << ans << endl;
    return 0;
}
