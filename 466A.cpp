#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m*a <= b) {
        cout << n*a << endl;
        return 0;
    }
    int t = n/m, r = n%m;
    if (r*a < b) {
        cout << t*b + r*a << endl;
        return 0;
    } 
    cout << (t+1)*b << endl;
    return 0;
}
