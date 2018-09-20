#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, d, mand, ans;
    cin >> n >> d;
    ans = n*2-2;
    mand = n*10 - 10;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        mand += t;
    }
    if (d < mand) {
        cout << "-1" << endl;
        return 0;
    }
    if (d - mand >= 5) {
        ans += (d-mand)/5;
    }
    cout << ans << endl;
    return 0;
}
