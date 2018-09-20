#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    double n, m, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    unsigned long long ans = (unsigned long long)(ceil(n/a)*(unsigned long long)ceil(m/a));
    printf("%lld\n", ans);
    return 0;
}
