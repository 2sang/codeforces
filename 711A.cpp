#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<string> orig;
    bool available = false;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (!available) {
            if (s[0] == 'O' && s[1] == 'O') {
                available = true;
                s[0] = '+'; s[1] = '+';
            } else if (s[3] == 'O' && s[4] == 'O') {
                available = true;
                s[3] = '+';s[4] = '+';
            }
        }
        orig.push_back(s);
    }
    if (!available) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        cout << orig[i] << endl;
    }
    return 0;
}
