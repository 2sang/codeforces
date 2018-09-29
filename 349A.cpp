#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long coins[3];
    fill(coins, coins+3, 0);
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 25) {
            coins[0]++;
        } else if (x == 50) {
            if (coins[0]) coins[0]--;
            else {
                cout << "NO" << endl;
                return 0;
            }
            coins[1]++;
        } else {
            if (coins[1] && coins[0]) {
                coins[0]--;
                coins[1]--;
            } else if (coins[0] >= 3){
                coins[0]-= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
