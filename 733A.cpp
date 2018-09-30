#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    string s;
    cin >> s;
    char vowel[6] = {'A', 'E', 'O', 'U', 'I', 'Y'};
    int maxjump=0, curjump=0;
    for (int i = 0; i < s.length(); i++) {
        if (find(vowel, vowel+6, s[i]) != vowel+6) {
            curjump = 0;
        } else {
            curjump++;
            if (curjump > maxjump) maxjump = curjump;
        }
    }
    cout << maxjump + 1 << endl;
    return 0;
}
