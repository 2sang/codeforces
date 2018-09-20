#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    vector<int> bins;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        bins.push_back(x);
    }
    
    for (int l = 1; l <= n; l++) {
        for (int i = 0; i <= n - l; i++) {
            int subsum = 0;
            for(int j = i; j <= i+l; j++) {

            }
        }
    }
    return 0;
}
