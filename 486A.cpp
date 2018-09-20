#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    long long n;
    cin >> n;
    if (n & 1) printf("%lld\n", -((n/2)+1));
    else printf("%lld\n", n/2);
    return 0;
}
