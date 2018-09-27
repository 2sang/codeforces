#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n;
    int x[4] = {8, 4, 2, 6};
    cin >> n;
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    cout << x[(n-1)%4] << endl;
    return 0;
}
