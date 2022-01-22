#include<iostream>
using namespace std;
 int main(){
int base,exp;
 cin>>base>>exp;
int result=1;
while (exp>=1)
{
    result*=base;
    exp--;
}
cout<<result<<endl;
return 0;


 }