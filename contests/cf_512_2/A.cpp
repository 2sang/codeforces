#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
