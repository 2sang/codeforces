#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int t;
    cin >> t;
    while (t--) {
        long long L, v, l, r, a, b;
        cin >> L >> v >> l >> r;
        if (l%v == 0) a = l/v;
        else a = l/v+1;
        b = r/v;
        cout << L/v - ((b-a)+1)<< endl;
    }
    return 0;
}
