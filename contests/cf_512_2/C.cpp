#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, s, e, i=0;
    cin >> n;
    string st;
    cin >> st;
    for (int l = 1; l < n; l++) {
        int leftsum = 0;
        if (i+l > n-1) continue;
        for (int k = i; k < min(i+l, n-1); k++) {
            int ic = st[k] - '0';
            leftsum += ic;
        }
        printf("lsum: %d\n", leftsum);
        s = i+l; e = i+l;
        int rightsum = 0;
        while (e < n) {
            rightsum += st[e] - '0';
            printf("s: %d, e: %d, rightsum: %d\n", s, e, rightsum);
            if (leftsum >= rightsum) {
                if (leftsum == rightsum && e == n-1) {
                    cout << "YES" << endl;
                    return 0;
                }
                
                e++;
            } else { // leftsum < rightsum
                s = s+1;
                e = s+1;
                rightsum = 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
