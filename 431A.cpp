#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int a[4];
    long long ans=0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        ans += a[s[i]-'0'-1];
    cout << ans << endl;
    return 0;
}
