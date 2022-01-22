#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int sum=0;
cout<<"Enter the elements in the array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    sum+=a[i];
}
int avg=sum/n;
cout<<avg<<endl;
return 0;

}