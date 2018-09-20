#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    freopen("input.txt", "r", stdin);
    int n, t, cell_i=1;
    vector<int> portals;
    cin >> n >> t;
    for (int i = 0; i < n-1; i++) {
        int x;
        cin >> x;
        portals.push_back(x);
    }
    
    int i = 0;
    while (true) {
        printf("cell_i : %d\n", cell_i);
        cell_i += portals[i++];
        if (cell_i == t) {
            cout << "YES" << endl;
            return 0;
        }
        if (cell_i > t) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
