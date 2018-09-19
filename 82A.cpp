#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
    string people[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long x, remainder;
    cin >> x;
    int n = log2((x-1)/5. + 1);
    remainder = x - 5*(pow(2, n) - 1);
    int order = ceil(((float)remainder) / pow(2, n));
    cout << people[order-1] << endl;
    return 0;
}
