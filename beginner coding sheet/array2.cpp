#include<iostream>
using namespace std;
 int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
// we will store the largest element in a[0]
for (int i = 1; i < n; i++)
{
    if (a[i]>a[0])
    {
        a[0]=a[i];
        }
}
cout<<a[0]<<endl;
return 0;
 }