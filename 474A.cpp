#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    vector<string> ss;
    ss.push_back(s1); ss.push_back(s2); ss.push_back(s3);
    
    char dir; int dirint;
    cin >> dir;
    string changed, orig = "";
    cin >> changed;
    
    if (dir == 'R') dirint = -1;
    else dirint = 1;
    
    for (int i = 0; i < changed.length(); i++) {
        char cur = changed[i];
        for (int j = 0; j < ss.size(); j++) {
            string target = ss[j];
            for (int k = 0; k < target.length(); k++) {
                if (target[k] == cur) {
                    orig += target[k+dirint];
                    break;
                }
            }
        }
    }
    cout << orig << endl;
    

    return 0;
}
