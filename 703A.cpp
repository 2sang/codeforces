#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n, wa=0, wb=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b) wa++;
        else if (b > a) wb++;
    }
    if (wa > wb) cout << "Mishka" << endl;
    else if (wa < wb) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}
