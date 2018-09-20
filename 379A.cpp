#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int a, b, burned=0, ans=0;
    cin >> a >> b;
    ans = a;
    burned = a;
    while (burned >= b) {
        a = burned / b;
        burned = burned % b;
        ans += a;
        burned += a;
    }
    printf("%d\n", ans);
    return 0;
}
