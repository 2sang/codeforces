#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<char> sv;
    string s1, s2, sr;
    cin >> s1 >> s2 >> sr;
    for (int i = 0; i < s1.length(); i++) {
        sv.push_back(s1[i]);
    }
    for (int i = 0; i < s2.length(); i++) {
        sv.push_back(s2[i]);
    }
    for (int i = 0; i < sr.length(); i++) {
        auto it = find(sv.begin(), sv.end(), sr[i]);
        if (it != sv.end()) {
            sv.erase(it);
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (sv.size() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
