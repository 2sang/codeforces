#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

long long stringToNum(string s) {
    long long ret=0;
    for (int i = 0; i < s.length(); i++) {
        ret += (s[i] - 'A' + 1) * pow(26, s.length()-i-1);
    }
    return ret;
}

string numToString(long long x) {
    if (x == 0) return "";
    return numToString((x-1)/26) + string(1, 'A' + (x-1)%26);
}

int main(int argc, char *argv[]) {
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] == 'R') {
            int r, c;
            int cloc = s.find("C");
            r = stoi(s.substr(1, cloc));
            c = stoi(s.substr(cloc+1, s.length()));
            cout << numToString(c) << r << endl;
        } else {
            int k = 0;
            while (s[k] > '9') k++;
            cout << "R" << s.substr(k, s.length()) << "C" << stringToNum(s.substr(0, k)) << endl;
        }
    }
    return 0;
}
