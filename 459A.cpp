#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]){
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2) {
        if (abs(x1 - x2) != abs(y1 - y2)) {
            cout << "-1" << endl;
            return 0;
        }
        printf("%d %d %d %d\n", x1, y2, x2, y1);
    } else if (x1 == x2) {
        int l = abs(y2 - y1);
        if (x1+l <) {
            cout << "-1" << endl;
            return 0;
        }
        printf("%d %d %d %d\n", x1+l, y1, x2+l, y2);
    } else if (y1 == y2) {
        int l = abs(x2 - x1);
        printf("%d %d %d %d\n", x1, y1+l, x2, y2+l);
    }
    return 0;
}
