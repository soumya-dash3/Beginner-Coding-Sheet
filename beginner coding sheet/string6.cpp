#include<iostream>
using namespace std;
 int main(){
string str;
getline(cin,str);
for (int i = 0; i < str.size(); i++)
{
    if (str[i]>='0' && str[i]<='9')
    {
        continue;
    }
    char k=str[i]+1;
    cout<<k;
}
for (int i = 0; i < str.size(); i++)
{
    if (str[i]>='0'&& str[i]<='9')
    {
        cout<<str[i]<<endl;
    }    
}
return 0;
 }