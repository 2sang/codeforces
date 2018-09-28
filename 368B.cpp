#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long n, m;
    vector<long long> orig;
    long long freq[100001], ans[100001]; 
    fill(freq, freq+100001, 0);
    set<long long> se;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        orig.push_back(x);
        se.insert(x);
        freq[x]++;
    }
    for (int i = 0; i < n; i++) {
        long long cur = orig[i];
        ans[i+1] = se.size();
        freq[cur]--;
        if (freq[cur] < 0) cout << "something's wrong" << endl;
        if (freq[cur] == 0) se.erase(cur);
    }
    for (int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        cout << ans[x] << endl;
    }
    
    return 0;
}
