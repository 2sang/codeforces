#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    vector<int> v;
    cin >> n;
    string str;
    cin >> str;
    if (n == 1) {
        if (str[0] == 'W') cout << 0 << endl;
        else cout << 1 << endl << 1 << endl;
        return 0;
    }
    int subsum = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'B') subsum++;
        else {
            if (subsum) {
                v.push_back(subsum);
                subsum = 0;
            }
        }
    }
    if (subsum) v.push_back(subsum);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
