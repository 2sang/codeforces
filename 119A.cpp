#include <iostream>
using namespace std;
int gcd(int a, int b) {
    int g = 0;
    if (a == 0 || b == 0) return g;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0 && g < i) {
            g = i;
        }
    }
    return g;
}
int main(int argc, char *argv[]){
    int a, b, n;
    cin >> a >> b >> n;
    while (true) {
        n -= gcd(a, n);
        if (n <= 0) {
            cout << 0 << endl;
            return 0;
        }
        n -= gcd(b, n);
        if (n <= 0) {
            cout << 1 << endl;
            return 0;
        }
    }
    return 0;
}
