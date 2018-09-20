#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, t;
    cin >> n >> t;
    if (t == 10 && n == 1) {
        cout << "-1" << endl;
        return 0;
    }
    if (t == 10) t = 1;
    string s = to_string(t);
    for (int i = 0; i < n-1; i++) {
        s += "0";
    }
    cout << s << endl;
    return 0;
}
