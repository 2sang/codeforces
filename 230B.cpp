#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
char primes[1000000];
bool isPrime(long long n) {
    if (primes[n]) {
        if (primes[n] == 1) return false;
        else return true;
    }
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            primes[n] = 1;
            return false;
        }
    }
    primes[n] = 2;
    return true;
}
int main(int argc, char *argv[]){
    // 0 for unassigned, 1 for false, 2 for true
    memset(primes, 0, sizeof(primes));
    primes[1] = 1; primes[2] = 2; primes[3] = 2;
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        double mi;
        cin >> x;
        mi = sqrt(x);
        if (mi - ceil(mi) != 0) {
            cout << "NO" << endl;
            continue;
        }
        if (isPrime(mi)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
