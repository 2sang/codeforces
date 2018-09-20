#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) printf("0");
        else printf("1");
    }
    printf("\n");
    return 0;
}
