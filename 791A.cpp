#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    double a, b;
    cin >> a >> b;
    if (a == b) {
        printf("%d\n", 1);
        return 0;
    }
    double lim = log2(b/a)/log2(3./2.) + 1;
    int ans = (int)(floor(lim));
    printf("%d\n", ans);
    return 0;
}

