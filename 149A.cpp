#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    int k, cum=0, ans=0;
    vector<int> mon;
    cin >> k;
    for (int i = 0 ; i < 12; i++) {
        int a;
        cin >> a;
        mon.push_back(a);
    }
    sort(mon.begin(), mon.end(), greater<int>());
    for(int i = 0; i < 12; i++) {
        if (k <= cum) {
            cout << ans << endl;
            return 0;
        }
        cum += mon[i];
        ans++;
    }
    if (k <= cum) {
        cout << ans << endl;
        return 0;
    }
    cout << "-1" << endl;
    return 0;
}
