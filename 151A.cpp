#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k*l/nl, c*d), p/np)/n << endl;
    return 0;
}
