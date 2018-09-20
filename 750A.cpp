#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, k;
    cin >> n >> k;
    int avail = 240 - k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        avail -= 5*i;
        if (avail < 0) break;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
