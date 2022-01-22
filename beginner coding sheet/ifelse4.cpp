#include<iostream>
#include<cmath>
using namespace std;
 int main(){
cout<<"Enter the coefficients of the quadratic equations"<<endl;
int a,b,c;
float x1,x2;
cin>>a>>b>>c;
float d=b*b-4*a*c;
if (d>0)
{
    cout<<"The roots are real and distinct"<<endl;
    x1=(-b+sqrt(d)/2*a);
    x2=(-b-sqrt(d)/2*a);
    cout<<x1<<" "<<x2;
}
else if (d==0)
{
    cout<<"The roots are equal"<<endl;
    x1=x2=(-b/2*a);
    cout<<x1<<" "<<x2<<endl;
}
else
{
    cout<<"The roots complex and different"<<endl;
float realPart=-b/(2*a);
float imaginaryPart=sqrt(-d)/(2*a);
cout<<x1<<realPart<<"+"<<imaginaryPart<<"i"<<endl;
cout<<x2<<realPart<<"-"<<imaginaryPart<<"i"<<endl;

}
return 0;

 }