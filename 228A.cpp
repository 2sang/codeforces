#include <iostream>
#include <set>
using namespace std;
int main(int argc, char *argv[]){
    set<long long> s;
    for (int i = 0; i < 4; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size() << endl;
    return 0;
}
