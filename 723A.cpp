#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b, c)) - min(a, min(b, c)) << endl;
    return 0;
}
