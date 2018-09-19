#include <iostream>
#include <cctype>
using namespace std;
int score(char c) {
    c = tolower(c);
    if (c == 'q') return 9;
    if (c == 'r') return 5;
    if (c == 'b') return 3;
    if (c == 'n') return 3;
    if (c == 'p') return 1;
    else return 0;
}
int main(int argc, char *argv[]){
    int w=0, b=0;
    for (int i = 0; i < 8; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            char c = s[j];
            if (islower(c)) b += score(c);
            else w += score(c);
        }
    }
    if (w > b) cout << "White" << endl;
    else if (w < b) cout << "Black" << endl;
    else cout << "Draw" << endl;
    return 0;
}
