#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    string s;
    cin >> s;
    string sc(s);
    reverse(sc.begin(), sc.end());
    cout << s << sc << endl;
    return 0;
}

