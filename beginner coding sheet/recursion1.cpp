#include<iostream>
using namespace std; 
void sum(int n){
    if (n!=0)
    {
        return n+sum(n-1);
    }
    return 0;
}
int main(){
int n;
cin>>n;
cout<<"Sum is "<<sum(n)<<endl;
return 0;
    
}