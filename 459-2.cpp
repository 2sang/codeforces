#include <iostream>
#include <utility>
#include <cmath>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int x1, y1, x2, y2;
    float r;
    bool possible = false;
    pair<float,float> c[2];
    vector<pair<int,int>> points;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2) {
        if (abs(x2-x1) != abs(y2-y1)) {
            cout << -1 << endl;
            return 0;
        }
        r = abs(x1-x2)/2.;
        c[0] = c[1] = make_pair((x2+x1)/2., (y2+y1)/2.);
    } else if (x1 == x2) {
        r = abs(y1-y2)/2.;
        c[0] = make_pair(x1+r, (y2+y1)/2.);
        c[1] = make_pair(x1-r, (y2+y1)/2.);
    } else {
        r = abs(x1-x2)/2.;
        c[0] = make_pair((x2+x1)/2., y1+r);
        c[1] = make_pair((x2+x1)/2., y1-r);
    }
    for (int i = 0; i < 2; i++) {
        points.clear();
        possible = true;
        points.push_back(make_pair(c[i].first + r, c[i].second + r));
        points.push_back(make_pair(c[i].first - r, c[i].second + r));
        points.push_back(make_pair(c[i].first + r, c[i].second - r));
        points.push_back(make_pair(c[i].first - r, c[i].second - r));
        for (int j = 0; j < points.size(); j++) {
            if (! ((points[j].first >= -1000 && points[j].first <= 1000) &&
                (points[j].second >= -1000 && points[j].second <= 1000))){
                possible = false;
                break;
            }
        }
        if (possible) {
            for (int j = 0; j < points.size(); j++) {
                if ((points[j].first == x1 && points[j].second == y1) ||
                    (points[j].first == x2 && points[j].second == y2))
                    continue;
                cout << points[j].first << " " << points[j].second << " ";
            }
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
