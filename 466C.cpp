#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    vector<long long> a, s;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a.push_back(x);
        if (i == 0) s.push_back(x);
        else s.push_back(x+s[i-1]);
    }
    long long total = s[n-1];
    if (total % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    long long ans=0, cnt=0;
    
    for(long long i = 0; i < n-1; i++) {
        if (s[i] == total*2/3) ans += cnt;
        if (s[i] == total/3) cnt++;
    }
    cout << ans << endl;
    return 0;
}
