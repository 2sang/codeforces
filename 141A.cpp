#include <iostream>
#include <map>
using namespace std;
int main(int argc, char *argv[]){
    freopen("input.txt", "r", stdin);
    map<char, int> letter_dict;
    string s[2], sr;
    cin >> s[0] >> s[1] >> sr;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < s[i].length(); j++) {
            if (letter_dict.count(s[i][j]) == 0) {
                letter_dict.insert(make_pair(s[i][j], 1));
            } else {
                letter_dict[s[i][j]] += 1;
            }
        }
    }
    
    /*
    for (auto it = letter_dict.begin(); it != letter_dict.end(); ++it) {
        printf("%c: %d\n", (*it).first, (*it).second);
    }
    */
    
    for (int i = 0; i < sr.length(); i++) {
        if (letter_dict.count(sr[i]) != 0 && letter_dict[sr[i]] > 0) {
            letter_dict[sr[i]] -= 1;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (auto it = letter_dict.begin(); it != letter_dict.end(); ++it) {
        if (it->second == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
