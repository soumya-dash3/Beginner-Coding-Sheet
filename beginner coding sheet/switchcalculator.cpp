#include<iostream>
using namespace std;
 int main(){
char operator;
float n1,n2;
cout<<"Enter the operator out of '+','-','*','\'"<<endl;
cin>>operator;
cout<<"Enter the numbers"<<endl;
cin>>n1>>n2;
switch (operator){
case '+':
    cout<<n1+n2<<endl;
    break;
case '-':
cout<<n1-n2<<endl;
case '*':
cout<<n1*n2<<endl;
case '/':
cout<<n1/n2<<endl;
default:
cout<<"The operator is invalid"<<endl;
    break;
}
return 0;


 }