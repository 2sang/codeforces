#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long n;
    long long f[1440];
    fill(f, f+1440, 0);
    cin >> n;
    for (long long i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        f[h*60+m]++;
    }
    long long cashers = *max_element(f, f+1440);
    cout << cashers << endl;
    return 0;
}
