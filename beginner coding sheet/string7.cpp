#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;
 int main(){
string str;
getline(cin,str);
for (int i = 0; i < strlen(str); i++)
{
    str[i]=tolower(str[i]);
}
// to convert all the letters to lowercase for easy comparison
bool flag=true;
for (int i = 0; i < strlen(str)/2; i++)
{
    if (str[i]!=str[strlen(str)-i-1])
    {
        flag=false;
        break;
    }   
}
if (flag)
{
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not a palindrome"<<endl;
}
return 0;
 }