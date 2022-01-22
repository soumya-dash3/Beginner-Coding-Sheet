#include<iostream>
using namespace std;
 int main(){
string str;
cout<<"Enter the string"<<endl;
getline(cin,str);
int count=0;
int i=0;
while (str[i]!='\0')
{
    i++;
    count++;
}
cout<<count<<endl;
return 0;
// using str.size() is direct 

 }