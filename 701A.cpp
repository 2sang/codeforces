#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, c[101], total=0;
    c[0] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        c[i] = x;
        total += x;
    }
    int pairsum = total/(n/2);
    for (int i = 1; i <= n; i++) {
        int c1 = c[i];
        if (c1 == 0) continue;
        for (int j = i+1; j <= n; j++) {
            if (c[j] >= 0 && c1 + c[j] == pairsum) {
                cout << i << " " << j << endl;
                c[j] = 0;
                break;
            }
        }
    }
    return 0;
}
