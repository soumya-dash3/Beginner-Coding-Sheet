#include<iostream>
using namespace std;
int power(int b,int exp){
    if (exp!=0)
    {
        return (b*power(b,exp-1));
    }
else
return 1;
}
 int main(){
int b,exp;
cin>>b>>exp;
int result=power(b,exp);
cout<<result<<endl;


 }