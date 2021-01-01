//insertion sorting
#include <iostream>

using namespace std;

int main()
{
    int i,n,j,k,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n-1;i++)
    {
     temp=a[i];
     for(j=0;j<i;j++)
     {
         if(a[j]>temp)
         {
             for(k=i-1;k>=j;k--)
             {
                 a[k+1]=a[k];
             }
             a[j]=temp;
             break;
         }
     }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
