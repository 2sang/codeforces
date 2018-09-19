#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long fs = min(c, d);
    long long tfs = min(a, fs);
    a -= tfs;
    long long tt = min(b, a);
    cout << 256*tfs + tt*32 << endl;
    return 0;
}
