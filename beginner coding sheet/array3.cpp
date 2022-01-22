#include<iostream>
#include<cmath>
using namespace std;
float calculateSD(float data[]){
float sum=0.0,mean,standard deviation=0.0;
for (int i = 0; i < 10; i++)
{
    sum+=data[i];
}
mean=sum/10;
for (int i = 0; i < 10; i++)
{
    standard deviation+=pow(data[i]-mean,2);
}
return sqrt(standard deviation/10);
}
 int main(){
int data[10];
for (int i = 0; i < 10; i++)
{
    cin>>data[i];
}
cout<<calculateSD(data)<<endl;
return 0;
 }