#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, m;
    bool isColored = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            if (x == 'M' || x == 'Y' || x == 'C') {
                isColored = true;
            }
        }
    }
    if (isColored) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    return 0;
}
