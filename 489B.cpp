#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    int n, m, ans=0;
    vector<int> vn, vm;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vn.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        vm.push_back(x);
    }
    sort(vn.begin(), vn.end(), greater<int>());
    sort(vm.begin(), vm.end(), greater<int>());
    while (!vn.empty() && !vm.empty()) {
        int nb, mb;
        nb = *(vn.begin());
        mb = *(vm.begin());
        if (abs(nb-mb) <= 1) {
            vn.erase(vn.begin());
            vm.erase(vm.begin());
            ans++;
            continue;
        }
        if (nb > mb) {
            vn.erase(vn.begin());
        } else {
            vm.erase(vm.begin());
        }
    }
    cout << ans << endl;
    return 0;
}
