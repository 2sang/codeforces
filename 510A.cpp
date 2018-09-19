#include <iostream>
using namespace std;

char finder(int row, int col, int m, int n) {
    if (row % 2 == 0) return '#';
    if (row % 4 == 1) {
        if (col == n-1) return '#';
        else return '.';
    } else {
        if (col == 0) return '#';
        else return '.';
    }
}
int main(int argc, char *argv[]){
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", finder(i, j, m, n));
        }
        printf("\n");
    }
    return 0;
}
