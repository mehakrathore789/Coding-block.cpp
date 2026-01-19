#include<iostream>
using namespace std;

int main() {
    float p, r, t;
    cout<<"Enter principal, rate and time: ";
    cin >> p >> r >> t;
    cout << (p * r * t) / 100;
    return 0;
}

