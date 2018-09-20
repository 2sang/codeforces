#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int k, kp, r, ans=1;
    cin >> k >> r;
    kp = k;
    while (kp % 10 != r) {
        if (kp % 10 == 0) break;
        kp += k;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
