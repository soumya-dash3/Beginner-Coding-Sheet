#include<iostream>
using namespace std;
void convertdectobin(long long int n){
    int i=0;
while (n!=0)
{
    int binnum[i]=n%2;
    n=n/2;
    i++
}
// we stored the remainder of the number
// now printing the array in reverse order
for (int j = n-1; j >=0; j--)
{
    cout<<binnum[j];
}

}
int main(){
//6 is decimal 110 is binary
int n;
cin>>n;
cout<<convertdectobin(n)<<endl;
return 0;


}