#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    char isprime[1000001];
    fill(isprime, isprime+1000001, 1);
    vector<long long> a;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x == 1) {
            cout << -1 << endl;
            return 0;
        }
        a.push_back(x);
    }
    for (int i = 2; i*i<1000001; i++) {
        if (isprime[i] == 0) continue;
        for (int j = 2*i; j < 1000001; j=j+i){
            isprime[j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        isprime[a[i]] = 0;
    }
    for (int i = 1; i < 1000001; i++) {
        if (isprime[i]) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
