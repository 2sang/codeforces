#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, d, m;
    cin >> n >> d >> m;
    int yp1, yp2, yp3, yp4;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        yp1 = x+d;
        yp2 = -x+2*n-d;
        yp3 = x-d;
        yp4 = -x+d;
        if (yp1 < y || yp2 < y || yp3 > y || yp4 > y) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
