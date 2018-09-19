#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    vector<int> tasks;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (i == 0) tasks.push_back(x);
        else {
            if (tasks[i-1] == x) continue;
            else tasks.push_back(x);
        }
    }
    int current = 1;
    int ans = 0;
    while (!tasks.empty()) {
        int target = tasks[0];
        int distance;
        if (target < current) distance = n - current + target;
        else distance = target - current;
        ans += distance;
        current = target;
        tasks.erase(tasks.begin());
    }
    printf("%d\n", ans);
    return 0;
}
