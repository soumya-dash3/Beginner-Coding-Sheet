#include<iostream>
using namespace std;
 int main(){
     int r,c;
     cin>>r>>c;
     int a[10][10];
     int t[10][10];
     for (int i = 0; i < r; i++)
     {
         for (int j = 0; j < c; j++)
         {
             cin>>a[i][j];
         }
     }
    // displaying the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<" "<<a[i][j];
            if (j==c-1)
            {
                cout<<endl;
            }     
        }
    }
  //transpose
  for (int i = 0; i < r; i++)
  {
      for (int j = 0; j < c; j++)
      {
          t[j][i]=a[i][j];
      }
  }
  //printing the transpose
  for (int i = 0; i < r; i++)
  {
      for (int j = 0; j < c; j++)
      {
          cout<<" "<<t[i][j];
          if (j==r-1)
          {
              cout<<endl;
          }   
      }    
  }
         return 0;
 }