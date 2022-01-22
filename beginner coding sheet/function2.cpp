#include<iostream>
using namespace std;
int isPrime(int n){
    bool prime=true;
    if (n==0||n==1)
    {
        prime=false;
    }
    else
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            prime=false;
            break;
        }
            }
            return prime;
    }
 int main(){
int n;
cin>>n;
bool flag=false;
for (int i = 2; i <=n/2; i++)
{
    if (isPrime(i))
    {
        if (isPrime(n-i))
        {
            cout<<n<<"="<<i<<"+"<<n-i<<endl;
            flag=true;
        }
            }
    }
if (!flag)
{
    cout<<n<<" cant be expressed in terms of sum of prime numbers ";
    
}
return 0;
 }