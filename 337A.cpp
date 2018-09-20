#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int n, m, minAns = 9999;
    vector<int> pieces;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int piece;
        scanf("%d", &piece);
        pieces.push_back(piece);
    }
    sort(pieces.begin(), pieces.end());
    
    int ia = 0, ib = ia + n - 1;
    for (int j = ib; j < m; j++) {
        int sub = pieces[j] - pieces[ia++];
        if (sub < minAns) minAns = sub;
    }
    printf("%d\n", minAns);
    return 0;
}
