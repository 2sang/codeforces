#include <iostream>
#include <map>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    map<string, int> m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        auto it = m.find(s);
        if (it == m.end()) {
            m.insert(make_pair(s, 1));
            cout << "OK" << endl;
        } else {
            int c = it->second++;
            cout << s << c << endl;
        }
    }
    return 0;
}
