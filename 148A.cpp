#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    bool dragons[100001];
    memset(dragons, 0, sizeof(dragons));
    vector<int> intervals;
    int ans=0;
    
    for (int i = 0; i < 4; i++) {
        int interval;
        scanf("%d", &interval);
        intervals.push_back(interval);
    }
    
    int n;
    scanf("%d", &n);
    
    // For every factors
    for (vector<int>::iterator it = intervals.begin(); it != intervals.end(); ++it) {
        int factor = *it;
        for (int i = 1; i < 100001; i++) {
            if (factor * i <= 100001 && !dragons[factor * i]) 
                dragons[factor * i] = 1;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (dragons[i]) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
