#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    cin >> n;
    for (long long row = 0; row <= 2*n; row++) {
        int c0 = min(row, (2*n-row))-n;
        for (long long col=0; col <= 2*n; col++) {
            int v = min(col, (2*n-col))+c0;
            if (v < 0 && col > n) break;
            if (v < 0) printf("  ");
            else {
                if (v == 0 && col >= n) {
                    printf("%d", v);
                    break;
                }
                else printf("%d ", v);
            }
        }
        printf("\n");
    }
    return 0;
}
