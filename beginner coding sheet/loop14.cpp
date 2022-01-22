#include<iostream>
using namespace std;
 int main(){
int low,high;
bool isPrime=true;
while (low<high)
{
    if (low==0 || low==1)
{
    isPrime=false;
}
else
{
    for (int i = 2; i <=low/2; i++)
    {
        if (low%i==0)
        {
            isPrime=false;
            break;
        }
            }
    }
        if (isPrime)
        {
            cout<<low<<endl;
        }
        low++;
}
return 0;
 }