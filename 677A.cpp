#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, h;
    cin >> n >> h;
    int ans = n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > h) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
