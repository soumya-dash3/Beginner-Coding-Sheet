#include<iostream>
#include<cmath>
using namespace std;
int convertbintodec(long long int n){
int decnumber=0;
int i=0;
while(n!=0){
int rem=n%10;
n=n/10;
decnumber+=rem*pow(2,i);
i++;
}
return decnumber;
}
 int main(){
int n;
cin>>n;
cout<<convertbintodec(n);
//110 is binary 6 is decimal
return 0;
 }