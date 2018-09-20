#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, ans=0, pol=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            if (pol == 0) ans++;
            else pol--;
        } else {
            pol += x;
        }
    }
    printf("%d\n", ans);
    return 0;
}
