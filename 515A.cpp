#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    long long a, b;
    unsigned long long s;
    cin >> a >> b >> s;
    if (abs(a) + abs(b) > s) {
        cout << "No" << endl;
        return 0;
    }
    if (!( ((abs(a)+abs(b))&1) ^ (s&1))) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
