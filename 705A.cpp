#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    cin >> n;
    cout << "I hate ";
    for (int i = 1; i < n; i++) {
        if (i & 1) cout << "that I love ";
        else cout << "that I hate ";
    }
    cout << "it" << endl;
    return 0;
}
