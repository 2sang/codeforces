#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n, ans=0;
    cin >> n;
    string prev;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (i == 0 || s != prev) {
            prev = s;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
