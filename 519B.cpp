#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long first=0, second=0, third=0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        first += x;
    }
    for (int i = 0; i < n-1; i++) {
        long long x;
        cin >> x;
        second += x;
    }
    for (int i = 0; i < n-2; i++) {
        long long x;
        cin >> x;
        third += x;
    }
    cout << first - second << endl << second - third << endl;
    return 0;
}
