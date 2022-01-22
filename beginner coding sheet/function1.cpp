#include<iostream>
using namespace std; 
int isPrime(int n){
    bool isPrime=true;
    if (n==0||n==1)
    {
        isPrime=false;
    }
    else
    for (int i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            isPrime=false;
            break;
        }
            
    }
    return isPrime;
}
int main(){
int n1,n2;
cin>>n1>>n2;
if (n2<n1)
{
    int temp=n2;
    n2=n1;
    n1=temp;
}
bool flag;
for (int i = n1+1; i < n2; i++)
{
    //if a prime number flag==1
    flag=isPrime(i);
    if (flag)
    {
        cout<<i<<" ";
    }
}

return 0;

}