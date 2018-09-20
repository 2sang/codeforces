// This would've done only in 5 lines..
#include <iostream>
#include <cstring>
using namespace std;
bool isPrime(int n);

int main(int argc, char *argv[]){
    char primes[1000001];
    memset(primes, 'x', 1000001);
    long n;
    cin >> n;
    for (long i = 4; i <= n/2; i++) {
        long a = i, b = n - i;
        if (primes[a] == 'x') {
            if (isPrime(a)) primes[a] = 'p';
            else primes[a] = 'c';
        }
        if (primes[b] == 'x') {
            if (isPrime(b)) primes[b] = 'p';
            else primes[b] = 'c';
        }
        if (primes[a] == 'c' && primes[b] == 'c') {
            printf("%ld %ld\n", a, b);
            break;
        }
    }
}

bool isPrime(int n) {
    if (n == 1) return false;
    int i = 2;
    while (i*i <= n) {
        if(n%i == 0) return false;
        i++;
    }
    return true;
}
