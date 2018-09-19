#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int mat[11][11];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) mat[i][j] = 1;
            else mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }
    }
    cout << mat[n-1][n-1] << endl;
    return 0;
}
