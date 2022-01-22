#include<iostream>
using namespace std;
 int main(){
int n,rem;
int reversenum=0;
cin>>n;
while (n!=0)
{
    rem=n%10;
    reversenum=reversenum*10+rem;
    n=n/10;
}
cout<<reversenum<<endl;
if (n==reversenum)
{
    cout<<"Palindrome"<<endl;
}
else
cout<<"Not palindrome"<<endl;
return 0;
 }