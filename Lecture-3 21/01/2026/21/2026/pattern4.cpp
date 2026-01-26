#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int m=1; m<=n-i; m++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
