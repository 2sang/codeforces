#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string s;
    bool ab=false, ba=false;
    cin >> s;
    long long i = 0;
    
    // AB first
    freopen("input.txt", "r", stdin);
    while (i < s.length()-1) {
        if (!ab && s[i] == 'A' && s[i+1] == 'B') {
            ab = true;
            i+=2;
            continue;
        } else if (ab && s[i] == 'B' && s[i+1] == 'A'){
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    i = 0;
    // BA first
    while (i < s.length()-1) {
        if (!ba && s[i] == 'B' && s[i+1] == 'A') {
            ba = true;
            i+=2;
            continue;
        } else if (ba && s[i] == 'A' && s[i+1] == 'B'){
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;
}
