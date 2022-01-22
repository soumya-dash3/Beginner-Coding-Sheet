#include<iostream>
using namespace std;
 int main(){
int r1,r2,c1,c2;
int a[10][10],b[10][10],mul[10][10];
cin>>r1>>r2>>c1>>c2;
while (c1!=r2)
{
    cout<<"1st col isn't equal to 2nd row "<<endl;
    cout<<"Enter the rows and cols for first matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter the rows and cols for second matrix"<<endl;
    cin>>r2>>c2;

}
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c1; j++)
    {
        cin>>a[i][j];
    }
    
}
for (int i = 0; i < r2; i++)
{
    for (int j = 0; j < c2; j++)
    {
        cin>>b[i][j];
    }
    
}
//multiplying matrices
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c2; j++)
    {
        for (int k = 0; k < c1; k++)
        {
            mul[i][j]=a[i][k]*b[k][j];
        }
    }
}
//displaying the matrix
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c2; j++)
    {
        cout<<" "<<mul[i][j];
    }
}
int j;
if (j==c2-1)
{
    cout<<endl;
}
return 0;
}