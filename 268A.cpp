#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<pair<int, int>> teams;
    int n, ans=0;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        int home, away;
        cin >> home >> away;
        teams.push_back(make_pair(home, away));
    }
    for (int i = 0; i < n; i++) {
        int home = teams[i].first;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (home == teams[j].second) ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
