#include<iostream>
using namespace std;
 int main(){
int n,rem;
cin>>n;
int reversenum=0;
while (n!=0)
{
    rem=n%10;
    reversenum=reversenum*10+rem;
    n=n/10;
}
cout<<reversenum<<endl;
return 0;

 }