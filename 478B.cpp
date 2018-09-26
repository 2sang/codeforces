#include <iostream>
#include <cmath>
using namespace std;
long long pairs(long long x){
    return x*(x-1)/2;
}
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    long long x = n-(m-1);
    long long maxx, minx=pairs(x);
    maxx = pairs(n/m + 1)*(n%m) + (m - (n%m))*pairs(n/m);
    cout << maxx << " " << minx << endl;
    return 0;
}
