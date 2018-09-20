#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    string s, sp;
    vector<char> str;
    cin >> s >> sp;
    for (int i = 0; i < s.length(); i++) {
        str.push_back(s.at(i));
    }
    reverse(str.begin(), str.end());
    for (int i = 0; i < s.length(); i++) {
        if (str[i] != sp.at(i)) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    
    return 0;
}
