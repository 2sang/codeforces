#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
    int n, ans;
    cin >> n;
    int portion = n/5;
    int remainder = n%5;
    ans = portion + ceil(remainder/5.);
    printf("%d\n", ans);
    return 0;
}
