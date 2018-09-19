#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, n;
    vector<pair<int, int>> ds;
    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        int st, re;
        cin >> st >> re;
        ds.push_back(make_pair(st, re));
    }
    sort(ds.begin(), ds.end());
    
    while (!ds.empty()) {
        if (s > ds[0].first) s += ds[0].second;
        else {
            cout << "NO" << endl;
            return 0;
        }
        ds.erase(ds.begin());
    }
    cout << "YES" << endl;
    return 0;
}

