#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; double l;
    cin >> n >> l;
    vector<double> locs;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        locs.push_back(x);
    }
    sort(locs.begin(), locs.end());
    double maxdist = max(locs[0], l - locs[n-1]);
        
    for (int i = 0; i < n-1; i++) {
        double between = (locs[i+1] - locs[i]) / 2;
        if (between > maxdist) maxdist = between;
    }
    printf("%0.11lf\n", maxdist);
    
    return 0;
}
