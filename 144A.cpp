#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]){
    int n, minVal=101, maxVal=0, argmin, argmax, ans=0;
    vector<int> heights;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        heights.push_back(h);
    }
    argmin = 0;
    argmax = n - 1;
    for (int i = 0; i < n; i++) {
        if (minVal >= heights[i]) {
            minVal = heights[i];
            argmin = i;
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if (maxVal <= heights[i]) {
            maxVal = heights[i];
            argmax = i;
        }
    }
    ans = argmax + (n - argmin - 1);
    if (argmax > argmin) ans--;
    cout << ans;
    return 0;
}
