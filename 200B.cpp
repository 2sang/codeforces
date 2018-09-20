#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    double total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        total += x;
    }
    printf("%.6lf", total/(double)n);
    return 0;
}
