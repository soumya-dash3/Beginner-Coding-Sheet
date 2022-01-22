#include<iostream>
using namespace std;
 int main(){
string str;
string temp="";
cout<<"Enter the string"<<endl;
getline(cin,str);
for (int i = 0; i < str.size(); i++)
{
    if (str[i]>='a' && str[i]<='z'||str[i]>='A' && str[i]<='Z')
    {
        temp=temp+str[i];
    }
}
str=temp;
cout<<str<<endl;
return 0;
 }