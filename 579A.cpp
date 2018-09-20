#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    unsigned long long x;
    int ans=0;
    cin >> x;
    for (int i = 0; i < 64; i++) {
        if ((unsigned long long)1 & x) ans++;
        x = x >> 1;
    }
    printf("%d\n", ans);
    
    return 0;
}
