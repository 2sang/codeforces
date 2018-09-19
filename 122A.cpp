#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int luckies[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int input;
    cin >> input;
    for (int i = 0; i < 14; i++) {
        if (!(input % luckies[i])) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
