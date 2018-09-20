#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n;
    cin >> n;
    cout << n/2 << endl;
    for(int i = 0; i < n/2; i++) {
        if (n & 1 && i == 0) {
            cout << "3 ";
            continue;
        }
        cout << "2 ";
    }
    return 0;
}
