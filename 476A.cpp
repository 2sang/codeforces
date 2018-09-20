#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]){
    int n, m, s, e;
    cin >> n >> m;
    s = (int) ceil(float(n)/2.);
    e = n;
    for (int i = s; i <= e; i++) {
        if (i % m == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
