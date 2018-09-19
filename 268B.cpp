#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    long long ans=0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        ans += i * (n-i);
    }
    cout << ans + n << endl;
    return 0;
}
