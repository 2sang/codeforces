#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int span, m, ans=0;
    cin >> span >> m;
    int day=1;
    while (span--) {
        if (day % m == 0) span++;
        day++;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
