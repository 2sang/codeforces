#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long a, b;
    cin >> a >> b;
    int mi = min(a, b);
    int ans = 1;
    for (int i = 1; i <= mi; i++) {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}
