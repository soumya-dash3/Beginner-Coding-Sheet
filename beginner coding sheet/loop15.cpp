#include<iostream>
#include<cmath>
using namespace std;
 int main(){
int n,rem,num,orignum,result=0;
cin>>num;
num=orignum;
while (orignum!=0)
{
    orignum/=10;
    n++;
}
while (orignum!=0)
{
    rem=orignum%10;
    int power=round(pow(rem,n));
result+=power;
orignum/=10;
}
if (result=num)
{
    cout<<"Armstrong"<<endl;
}
else
cout<<"Not armstrong"<<endl;
return 0;

 }