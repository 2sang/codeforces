#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    vector<long long> v;
    long long n, mx, ans=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long  x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    mx = v[n-1];
    for (int i = 0 ; i < n; i++) {
        ans += mx - v[i];
    }
    cout << ans << endl;
    
    return 0;
}
