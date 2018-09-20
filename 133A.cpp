#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[]){
    set<char> inst;
    inst.insert('H'); inst.insert('Q');
    inst.insert('+'); inst.insert('9');
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char c = s.at(i);
        if (inst.find(c) != inst.end()) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
