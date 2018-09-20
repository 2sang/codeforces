#include <iostream>
#include <cctype>
using namespace std;
char score(char c) {
    c = tolower(c);
    if (c == 't') return 4;
    if (c == 'c') return 6;
    if (c == 'o') return 8;
    if (c == 'd') return 12;
    if (c == 'i') return 20;
    return 0;
}
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, ans=0;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        string s;
        cin >> s;
        ans += score(s[0]);
    }
    cout << ans << endl;
    return 0;
}
