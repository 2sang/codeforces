#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main(int argc, char *argv[]){
    int year;
    set<int> distinct;
    cin >> year;
    while (year++) {
        for (int i = 0; i < 4; i++) {
            int digit;
            digit = (int)(year / pow(10, i)) % 10;
            distinct.insert(digit);
        }
        if (distinct.size() == 4) {
            printf("%d\n", year);
            return 0;
        }
        distinct.clear();
    }
    return 0;
}
