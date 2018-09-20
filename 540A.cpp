#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, ans=0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++) {
        int big, small;
        if (s1[i] > s2[i]) {
            big = s1[i]; small = s2[i];
        } else {
            big = s2[i]; small = s1[i];
        }
        ans += min((big-small), (10+small-big));
    }
    cout << ans << endl;
    return 0;
}
