#include<iostream>
using namespace std;
 int main(){
string str="hello";
char checkChar;
cout<<"Enter a character"<<endl;
cin>>checkChar;
int count=0;
for (int i = 0; i < str.size(); i++)
{
    if (str[i]==checkChar)
    {
        count++;
    }    
}
cout<<checkChar<<" appears "<<count<<" times"<<endl;
return 0;

 }