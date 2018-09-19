#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << min(min(2*b + 2*c, a+b+c), min(2*a + 2*c, 2*a + 2*b)) << endl;
    return 0;
}
