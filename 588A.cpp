#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long n;
    cin >> n;
    int min_price = 101, ans=0;
    
    for (long long i = 0; i < n; i++) {
        int a, p;
        cin >> a >> p;
        if (p < min_price) min_price = p;
        ans += a*min_price;
    }
    cout << ans << endl;
    return 0;
}
