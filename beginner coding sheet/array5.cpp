#include<iostream>
using namespace std;
 int main(){
     int a[100][100];
int b[100][100];
int r,c;
cin>>r>>c;
int sum[100][100];
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cin>>a[i][j];
    }
}
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cin>>b[i][j];
    }
}
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
}
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout<<sum[i][j]<<" ";
    }
}
int j;
if (j==c-1)
{
    cout<<endl;
}
return 0;
 }