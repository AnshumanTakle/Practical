#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int k=0; k<(5-i);k++)
         cout<<" ";
        for(int j=0; j<=i;j++)
         {
             cout<<"* ";
         } 
         cout<<"\n";
    }
}