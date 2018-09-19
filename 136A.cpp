#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    vector<int> last;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ith;
        cin >> ith;
        last.push_back(ith);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (last[j] == i+1) {
                printf("%d ", j+1);
                break;
            }
        }
    }
    return 0;
}
