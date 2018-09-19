#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    long long sums[100001];
    int b[100001];
    string s;
    cin >> s;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == s[i+1]) b[i] = 1;
        else b[i] = 0;
    }
    for (int i = 0; i < s.length()-1; i++) {
        if (i == 0) {
            sums[i] = b[i];
            continue;
        }
        sums[i] = sums[i-1] + b[i];
    }
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long l, r;
        cin >> l >> r;
        cout << sums[r-2] - sums[l-1] + b[l-1]<< endl;
    }
    return 0;
}
