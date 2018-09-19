#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]){
    int lowers=0, uppers=0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) uppers++;
        else lowers++;
    }
    
    if (lowers >= uppers) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
