#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]){
    long long a[100001], sorted[100001];
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a[i] = x; sorted[i] = x;
    }
    sort(sorted, sorted+n);
    if (equal(a, a+n, sorted)) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    
    long long lp=0, rp=n-1;
    bool ldone=false, rdone=false;
    while (lp <= rp) {
        if (ldone && rdone) break;
        
        if (a[lp] == sorted[lp]) lp++;
        else ldone=true;
        
        if (a[rp] == sorted[rp]) rp--;
        else rdone=true;
    }
    reverse(a+lp, a+rp+1);
    if (equal(a, a+n, sorted)) {
        cout << "yes" << endl;
        cout << lp+1 << " " << rp+1 << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
