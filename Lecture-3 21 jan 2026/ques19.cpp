#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number:";          //give a input 7 kyuki fir ye galat output dega
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {

            if(
               (i == 1)||
               (i == 2 && (j <= 3 || j >= 5)) ||
               (i == 3 && (j <= 2 || j >= 6)) ||
               (i == 4 && (j == 1 || j == 7)) ||
               (i == 5 && (j <= 2 || j >= 6)) ||
               (i == 6 && (j <= 3 || j >= 5)) ||
               (i == 7)
              )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}