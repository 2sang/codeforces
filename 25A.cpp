#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, even_i=0, odd_i=0, poll=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x & 1) {
            poll--;
            odd_i = i;
        }
        else {
            poll++;
            even_i = i;
        }
    }
    if (poll < 0) printf("%d\n", even_i+1);
    else printf("%d\n", odd_i+1);
    return 0;
}
