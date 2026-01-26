#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=1; i<=n; i++) {

        for (int k=n; k>=i; k--) {
            cout << "  ";
        }

        for (int j=n; j>=n-1; j--) {
            cout << j << " ";
        }

        cout << "0 ";

        for (int j=n-1; j>n-i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}


