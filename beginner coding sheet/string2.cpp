#include<iostream>
using namespace std;
 int main(){
     int vowel=0,cons=0,digit=0,space=0;
string str;
cout<<"Enter the string"<<endl;
getline(cin,str);
for (int i = 0; i < str.length(); i++)
{
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
        vowel++;
    }
    else if (str[i]>='a' && str[i]<='z'|| str[i]>='A'&& str[i]<='Z')
    {
        cons++;
    }
    else if (str[i]>='0'&& str[i]<='9')
    {
        digit++;
    }
    else if (str[i]==' ')
    {
        space++;
    }
    }
cout<<vowel<<endl;
cout<<cons<<endl;
cout<<digit<<endl;
cout<<space<<endl;
return 0;
 }