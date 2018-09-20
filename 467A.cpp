#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int numRooms, ans=0;
    cin >> numRooms;
    for (int i = 0; i < numRooms; i++) {
        int people, capacity;
        cin >> people >> capacity;
        if (capacity - people >= 2) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
