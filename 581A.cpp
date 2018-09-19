#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int a, b, m, n=0;
    cin >> a >> b;
    m = min(a, b);
    a -= m; b -= m;
    n += a/2; n += b/2;
    cout << m << " " << n << endl;
    return 0;
}
