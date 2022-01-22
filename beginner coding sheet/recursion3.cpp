#include<iostream>
using namespace std;
int gcd(int n1,int n2){
    if (n1==0)
    {
        return n2;
    }
    else
    return gcd(n2%n1,n1);
}
 int main(){
int n1,n2;
cin>>n1>>n2;
cout<<"GCD is "<<gcd(n1,n2)<<endl;
return 0;


 }