#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long divs[150001];
    fill(begin(divs), begin(divs)+150001, 0);
    long long n;
    printf("%lld\n", divs[3]);
    divs[3] = divs[3] + 1;
    printf("%lld\n", divs[3]);
    
    printf("%lld\n", divs[15000]);
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        long long sqx = sqrt(x);
        for (long long j = 1; j <= sqx; j++) {
            if (x%j != 0) continue;
            if (j == sqx) {
                divs[j]++; 
            } else {
                divs[j]++;
                divs[x/j]++;
            }
        }
    }
    long long gcd = 1;
    long long gcd_i = 0;
    for (long long i = 0; i < 15000001; i++) {
        if (gcd < divs[i]) {
            gcd = divs[i];
            gcd_i = i;
        }
    }
    printf("gcd: %lld, gcd_i: %lld\n", gcd, gcd_i);
    return 0;
    
}
