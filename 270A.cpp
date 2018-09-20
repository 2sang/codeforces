#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    int tc;
    cin >> tc;
    while (tc--) {
        int a;
        cin >> a;
        if (360 % (180-a) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
