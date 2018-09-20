#include <iostream>
#include <set>
#include <cctype>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    string s;
    set<char> charset;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        charset.insert(tolower(s[i]));
    }
    if (charset.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
