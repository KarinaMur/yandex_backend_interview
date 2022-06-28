#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long *p=new long[n];

    for(int i=0;i<n;i++)
    {
      cin>>p[i];
    }

     long min_=p[0];
     for(int i=1;i<n;i++)
        {if(p[i]<min_) {cout<<"-1"; return 0;}
          min_=p[i];}



   cout<<p[n-1]-p[0];
   return 0;
}
