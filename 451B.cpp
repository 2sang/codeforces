#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    long long a[100001];
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a[i] = x;
    }
    long long start=0, end=0;
    bool done=false;
    for (long long i = 0; i < n-1; i++) {
        if (!done & a[i] < a[i+1]) {
            end++;
        } else if (!done & a[i] >= a[i+1]) {
            done = true;
            
        }
    }
    
    return 0;
}
