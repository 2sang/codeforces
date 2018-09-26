#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long n, max_d=0;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        if (x+y > max_d) max_d = x+y;
    }
    cout << max_d << endl;
    return 0;
}
