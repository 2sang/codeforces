#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<pair<long long, long long>> v;
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    long long max_p = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second <= max_p) {
            cout << "Happy Alex" << endl;
            return 0;
        } else {
            max_p = v[i].second;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
