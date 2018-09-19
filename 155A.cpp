#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, min, max, ans=0;
    cin >> n >> min;;
    max = min;
    for (int i = 0; i < n-1; i++) {
        int x;
        cin >> x;
        if (x < min) {
            min = x; ans++;
            continue;
        }
        if (x > max) {
            max = x; ans++;
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}
