#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int numGroups, ans=0;
    int groups[4] = {0, 0, 0, 0};
    cin >> numGroups;
    for (int i = 0; i < numGroups; i++) {
        int n;
        scanf("%d", &n);
        groups[n-1]++;
    }
    ans = groups[3] + groups[2] + (ceil(groups[1]/2.));
    groups[0] -= min(groups[2], groups[0]);
    groups[0] -= min((groups[1]%2)*2, groups[0]);
    ans += ceil(groups[0]/4.);
    printf("%d\n", ans);
    
    return 0;
}
