#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    int n, m;
    vector<string> s;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        s.push_back(s1); s.push_back(s2);
    }
    
    for (int i = 0; i < n; i++) {
        string st;
        cin >> st;
        auto it = find(s.begin(), s.end(), st);
        int ix = it - s.begin(), tix;
        if (ix & 1) tix = ix-1;
        else tix = ix+1;
        
        if (s[tix].length() == s[ix].length()) {
            if (ix & 1) cout << s[tix] << " ";
            else cout << s[ix] << " ";
        }
        else if (s[tix].length() > s[ix].length()) {
            cout << s[ix] << " ";
        } else {
            cout << s[tix] << " ";
        }
    }
    return 0;
}
