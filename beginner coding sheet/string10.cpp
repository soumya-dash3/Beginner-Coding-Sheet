#include<bits/stdc++.h>
using namespace std;
int main()
{     string s;
    getline(cin,s);
         int idx=0,idx1=0;
         int n=s.size();
             int mx=INT_MIN;
             int l=0,y=0;
         for(int i=0; i<n; i++)
         {
            if(s[i]==' '  || s[i]=='-')
            { idx=i-1;
                  int d=idx-idx1;
                   if(mx<d)
                   {
                    mx=d;
                  l=idx;
                  y=idx1;
                   }
                 idx1=i+1;
            }
         }
         for(int i=y; i<=l; i++)
         {
            cout<<s[i];
         }
         return 0;
         
}