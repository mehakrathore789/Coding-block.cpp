
#include<iostream>
using namespace std;
int main() {
    int n =5;
    cout<<"square star patteren"<<endl;
    for(int i=1;i<=n;i++){
        if(i>1) {
            cout<<endl;
        }
        for(int j =0;j<i+1;j++) {
            cout<<"*";
        }
    }
    cout<<endl;
    return 0;

}