#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int n, m;
    cin >> n >> m;
    if (m < n) {
        cout << n-m << endl;
        return 0;
    }
    vector<int> moves(10002, -1);
    queue<int> q;
    moves[n] = 0;
    q.push(n);
    int top;
    while (!q.empty()) {
        top = q.front();
        if (top == m) {
            cout << moves[top] << endl;
            return 0;
        }
        q.pop();
        if (2*top <= 10000) {
            if (moves[2*top] == -1) {
                moves[2*top] = moves[top] + 1;
                q.push(2*top);
            }
        }
        if (top > 1 && moves[top-1] == -1) {
            moves[top-1] = moves[top] + 1;
            q.push(top-1);
        }
    }
    return 0;
}
