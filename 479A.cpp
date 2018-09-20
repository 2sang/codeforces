#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1 && b == 1 && c == 1) {
        printf("3\n");
        return 0;
    }
    if (a == 1 && c == 1) {
        printf("%d\n", a+b+c);
        return 0;
    }
    if (a == 1 && b == 1) {
        printf("%d\n",(a+b)*c);
        return 0;
    }
    if (b == 1 && c == 1) {
        printf("%d\n", a*(b+c));
        return 0;
    }
    if (a == 1) {
        printf("%d\n", (a+b)*c);
        return 0;
    }
    if (c == 1) {
        printf("%d\n", a*(b+c));
        return 0;
    }
    if (b == 1) {
        if (a < c) printf("%d\n", (a+b)*c);
        else printf("%d\n", a*(b+c));
        return 0;
    }
    printf("%d\n", a*b*c);
    return 0;
}
