#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
    freopen("input.txt", "r", stdin);
    int n, k, ans = 0;
    vector<int> q;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        q.push_back(x);
    }
    int prev = 0;
    for (int i = 0; i < k; i++) {
        x = q.front(); 
        q.erase(q.begin());
        if (x != 0) {
            ans++;
            prev = x;
        } 
    }
    printf("%d", ans);
    return 0;
}
