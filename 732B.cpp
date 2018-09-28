#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int n, k, total=0;
    vector<int> v, res;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n-1; i++) {
        int twosum = v[i] + v[i+1];
        if (twosum < k) {
            total += (k-twosum);
            v[i+1] += (k-twosum);
        }
    }
    
    cout << total << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}

