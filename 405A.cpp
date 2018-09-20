#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }
    return 0;
}
