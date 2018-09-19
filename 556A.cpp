#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    long long n, ones=0, zeros=0;
    string s;
    cin >> n;
    cin >> s;
    for (long long i = 0; i < n; i++) {
        int x = s[i] - '0';
        if (x) ones++;
        else zeros++;
    }
    cout << abs(ones-zeros) << endl;
    return 0;
}
