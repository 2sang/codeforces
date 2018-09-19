#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum == 0 || sum % 5 != 0) cout << -1 << endl;
    else cout << sum/5 << endl;

    return 0;
}
