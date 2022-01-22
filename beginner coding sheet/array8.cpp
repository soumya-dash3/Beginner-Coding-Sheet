#include<iostream>
using namespace std;
void swap(int *a,int *b,int *c){
    int temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}
int main(){
    int a,b,c;
cin>>a>>b>>c;
swap(&a,&b,&c);
cout<<"After swap "<<a<<" "<<b<<" "<<c<<endl;
return 0;

}