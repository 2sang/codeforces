#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int digit=-1, lower=-1, upper=-1;
        int f_d=0, f_l=0, f_u=0;
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (isdigit(s[j])) {
                digit=j;
                f_d++;
            }
            else if (islower(s[j])) {
                lower=j;
                f_l++;
            }
            else if (isupper(s[j])) {
                upper=j;
                f_u++;
            }
            else cout << "?" << endl;
        }
        // All satisfying
        if (digit != -1 && lower != -1 && upper != -1) {
            cout << s << endl;
        // Only digits, lowers, uppers
        } else if (digit != -1 && lower == -1 && upper == -1) {
            cout << "aB" << s.substr(2, s.length()-2) << endl;
        } else if (digit == -1 && lower != -1 && upper == -1) {
            cout << "1B" << s.substr(2, s.length()-2) << endl;
        } else if (digit == -1 && lower == -1 && upper != -1) {
            cout << "1a" << s.substr(2, s.length()-2) << endl;
            
        // digit missing, lower missing, upper missing
        } else if (digit == -1 && lower != -1 && upper != -1) {
            if (f_l > f_u) {
                s[lower] = '0';
                cout << s << endl;
            } else {
                s[upper] = '0';
                cout << s << endl;
            }
        } else if (digit != -1 && lower == -1 && upper != -1) {
            if (f_d > f_u) {
                s[digit] = 'a';
                cout << s << endl;
            } else {
                s[upper] = 'a';
                cout << s << endl;
            }
        } else if (digit != -1 && lower != -1 && upper == -1) {
            if (f_d > f_l) {
                s[digit] = 'A';
                cout << s << endl;
            } else {
                s[lower] = 'A';
                cout << s << endl;
            }
        } else {
            cout << "??" << endl;
        }
    }
    return 0;
}
