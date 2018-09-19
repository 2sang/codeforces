#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
    bool changeFlag = false;
    string word;
    cin >> word;
    if (word.length() == 1) changeFlag = true;
    
    for (int i = 1; i < word.length(); i++) {
        char c = word.at(i);
        if (islower(c)) break;
        if (i == word.length()-1 && isupper(c)) changeFlag = true;
    }
    if (changeFlag) {
        for (int i = 0; i < word.length(); i++) {
            if (islower(word.at(i))) word[i] = toupper(word.at(i));
            else word[i] = tolower(word.at(i));
        }
    }
    cout << word << endl;
    
    return 0;
}
