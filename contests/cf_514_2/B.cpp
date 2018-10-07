#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    //freopen("input.txt", "r", stdin);
    int n, m;
    char mat[1001][1001];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char x;
            cin >> x;
            if (x == '#') {
                mat[i][j] = 1;
            }
            else mat[i][j] = 0;
        }
    }
    for (int i = 1; i <= n-2; i++) {
        for (int j = 1; j <= m-2; j++) {
            if (mat[i][j] >= 1 && mat[i+1][j] >= 1 && mat[i+2][j] >= 1 &&
                mat[i][j+1] >= 1 && mat[i][j+2] >= 1 && mat[i+1][j+2] >= 1 &&
                mat[i+2][j+1] >= 1 && mat[i+2][j+2] >= 1){
                mat[i][j] = 2; mat[i+1][j] = 2; mat[i+2][j] = 2;
                mat[i][j+1] = 2; mat[i][j+2] = 2; mat[i+1][j+2] = 2; 
                mat[i+2][j+1] = 2; mat[i+2][j+2] = 2;
                //printf("forge %d, %d\n", i, j);
                
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mat[i][j] == 1) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
