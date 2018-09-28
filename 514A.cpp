#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    string s, ans="";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        if (i == 0 && digit == 9) {
            ans += "9";
            continue;
        }
        if (digit >= 5) digit = 9 - digit;
        ans += to_string(digit);
    }
    cout << ans << endl;
    return 0;
}
