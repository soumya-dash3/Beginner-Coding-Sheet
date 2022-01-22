#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int t1=0;
int t2=1;
int nextTerm=t1+t2;
while (nextTerm<=n)
{
    cout<<nextTerm<<endl;
    t1=t2;
    t2=nextTerm;
    nextTerm=t1+t2;    
}
return 0;

}