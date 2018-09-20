#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    int n, a1, a2, a3, b1, b2, b3, need=0;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    need += ceil((float)(a1+a2+a3) / 5);
    need += ceil((float)(b1+b2+b3) / 10);
    if (need > n) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
