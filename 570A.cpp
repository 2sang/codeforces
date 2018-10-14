#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n, m;
    int can_freq[101];
    fill(can_freq, can_freq+101, 0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int cand = 1;
        long long max_voted = -1;
        for (int j = 1; j <= n; j++) {
            long long x;
            cin >> x;
            if (x > max_voted) {
                cand = j;
                max_voted = x;
            }

        }
        can_freq[cand]++;
    }
    int max_voted2 = 0;
    int elected = 1;
    for (int i = 1; i <= 100; i++) {
        if (can_freq[i] > max_voted2) {
            elected = i;
            max_voted2 = can_freq[i];
        }
    }
    cout << elected << endl;
    return 0;
}
