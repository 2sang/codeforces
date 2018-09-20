#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    vector<int> va, vb, vc;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1) va.push_back(i);
        if (x == 2) vb.push_back(i);
        if (x == 3) vc.push_back(i);
    }
    int teams = min(min(va.size(), vb.size()), vc.size());
    if (!teams) {
        cout << 0 << endl;
        return 0;
    }
    cout << teams << endl;
    for (int i = 0; i < teams; i++) {
        printf("%d %d %d\n", va[i], vb[i], vc[i]);
    }
    return 0;
}
