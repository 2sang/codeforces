#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, t[2001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        t[i] = x;
    }
    int maxlen = 0;
    for (int i = 1; i <= n; i++) {
        int s = t[i], len=1;
        while (s != -1) {
            s = t[s];
            len++;
        }
        if (len > maxlen) maxlen = len;
    }
    cout << maxlen << endl;
    return 0;
}
