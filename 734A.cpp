#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n, a=0, d=0;
    cin >> n;
    
    for (int i = 0; i < n; i ++) {
        char ch;
        cin >> ch;
        if (ch == 'A') a++;
        else d++;
    }
   
    if (a == d) printf("Friendship\n");
    else if (a > d) printf("Anton\n");
    else (printf("Danik\n"));
    return 0;
}



