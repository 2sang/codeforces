#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
    string s, s1, s2;
    long long o, a, b;
    cin >> s;
    s1 = s2 = s;
    int l = s.length();
    s1.erase(l-1, 1);
    s2.erase(l-2, 1);
    o = stoi(s);
    a = stoi(s1);
    b = stoi(s2);
    printf("%lld\n", max(o, max(a, b)));
    return 0;
}
