#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    string s;
    cin >> s;
    s += "WUB"; // Garantees the string ends with WUB
    vector<char> chars;
    vector<string> answers;
    for (int i = 0; i < s.length(); i++) {
        chars.push_back(s.at(i));
    }
    int i = 0;
    while (!chars.empty()) {
        if (chars.size() == 3) break;
        if (chars[i] == 'W' && chars[i+1] == 'U' && chars[i+2] == 'B') {
            if (i == 0) chars.erase(chars.begin(), chars.begin()+3);
            else {
                string newString = "";
                for (int j = 0; j < i; j++) {
                    newString += chars[j];
                }
                answers.push_back(newString);
            }
            chars.erase(chars.begin(), chars.begin()+i);
            i = 0;
        } else {
            i++;
        }
    }
    for(int i = 0; i < answers.size(); i++) {
        cout << answers[i] << " ";
    }
    cout << endl;
    return 0;
}
