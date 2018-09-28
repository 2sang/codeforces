#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n; int k;
    cin >> n >> k;
    while (k--) {
        int lastdigit = n%10;
        if (lastdigit == 0) n /= 10;
        else n--;
    }
    printf("%lld\n", n);
    return 0;
}
