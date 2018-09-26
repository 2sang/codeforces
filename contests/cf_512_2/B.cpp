#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int d, n, m;
    cin >> n >> d >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
    
        if (x <= d) {
            if (y <= x+d && y >= -x+d) {
                cout << "YES" << endl;
                continue;
            } else {
                cout << "NO" << endl;
                continue;
            }
        } else if (x <= n-d) {
            if (y <= x+d && y >= x-d) {
                cout << "YES" << endl;
                continue;
            } else {
                cout << "NO" << endl;
                continue;
            }
        } else {
            if (y <= -x+2*n-d && y >= x-d) {
                cout << "YES" << endl;
                continue;
            } else {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}
