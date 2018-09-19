#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, ans=0;
    cin >> n;
    for (int i = 1; i < 1000; i++) {
        int total = i*(i+1)*(i+2)/6;
        if (total > n) break;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
