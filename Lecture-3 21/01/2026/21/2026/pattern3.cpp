
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = n; i >= 1; i--) {        // rows
        for(int j = 1; j <= i; j++) {    // stars
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
