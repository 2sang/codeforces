#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n, a, b, c;
    cin >> n;
    a = n-2;
    b = c = 1;
    if (a % 3 == 0) 
        printf("%lld %lld %lld\n", a-1, b+1, c);
    else 
        printf("%lld %lld %lld\n", a, b, c);
    return 0;
}
