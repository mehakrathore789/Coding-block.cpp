/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number";          //give a input 7 kyuki fir ye galat output dega
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {

            if(
               (i == 1 && (j <= 3 || j >= 5)) ||
               (i == 2 && (j <= 2 || j >= 6)) ||
               (i == 3 && (j == 1 || j == 7)) ||
               (i == 5 && (j == 1 || j == 7)) ||
               (i == 6 && (j <= 2 || j >= 6)) ||
               (i == 7 && (j <= 3 || j >= 5))
              )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}*/




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter only an odd number!";
        return 0;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {

        int stars;
        if (i <= mid)
            stars = mid - i + 1;
        else
            stars = i - mid + 1;

        int spaces = n - 2 * stars;

        for (int j = 0; j < stars; j++)
            cout << "* ";

        for (int k = 0; k < spaces; k++)
            cout << "  ";

        for (int j = 0; j < stars; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
