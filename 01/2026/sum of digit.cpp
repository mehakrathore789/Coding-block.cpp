
#include<iostream>
using namespace std ;
int main() {
int digit;
int n;
 int sum=0;

cout <<"enter the value for n:";
cin>>n ;


while(n>0)
{
digit = n%10;
sum=sum+digit ;
n=n/10;
}

cout<<"The sum of digits is:"<<sum;


cout<<endl;
return 0;

}
