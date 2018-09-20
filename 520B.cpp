#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    int n, m;
    cin >> n >> m;
    int c=0;
    if (m < n) {
        cout << n-m << endl;
        return 0;
    }
    while (n < m) {
        if (m%2 == 0) m/=2;
        else m++;
        c++;
    }
    cout << c+n-m << endl;
    return 0;
}
