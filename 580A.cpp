#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int n, maxlen=0, seqlen=1;
    vector<int> seq;
    cin >> n;
    
    if (n == 1) {printf("1\n"); return 0;}
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        seq.push_back(num);
    }
    
    for (int i = 0; i < n-1; i++) {
        if (seq[i+1] < seq[i]) {
            if (seqlen > maxlen) maxlen = seqlen;
            seqlen = 1;
        // s[i] < s[i+1] and last two
        } else if (i == n-2){
            seqlen++;
            if (seqlen > maxlen) maxlen = seqlen;
        // s[i] < s[i+1]
        } else {
            seqlen++;
        }
    }
    printf("%d\n", maxlen);
    return 0;
}

