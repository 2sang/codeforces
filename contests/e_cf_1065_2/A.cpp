#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int solve();
int main(int argc, char *argv[]){
    bool submission=true;
    if (submission) {solve(); return 0;}
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int tc; cin >> tc; while (tc--) {solve();}
}

int solve() {
    int tc; cin >> tc; 
    while(tc--) {
        long long s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << (s/c) + (s/c)/a*b << endl;
    }
    return 0;
}
