#include <iostream>
#include <set>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]){
    set<int> letterset;
    for (int i = 0; i < 1000; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (isalpha(s[j])) letterset.insert(s[j]);
        }
    }
    cout << letterset.size() << endl;
    return 0;
}
