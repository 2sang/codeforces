#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    int ans = 0;
    string s;
    cin >> s;
    char cur = 'a';
    for (int i = 0; i < s.length(); i++) {
        char next = s[i];
        ans += min(min(abs(cur-next), abs(cur+26-next)), abs(next+26-cur));
        cur = next;
    }
    cout << ans << endl;
    return 0;
}
