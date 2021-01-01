//N queens problem
#include<iostream>

using namespace std;
bool isavailable(int arr[][25],int a , int b )
{
    int i,j,k;
    for(k=0;k<b;k++)
    {
        if(arr[a][k]==1)
        {
            return false;
        }
    }
    for(i=a-1,j=b-1;i>=0&&j>=0;i--,j--)
    {
        if(arr[i][j]==1)
        {
            return false;
        }
    }
     for(i=a+1,j=b-1;i>=0&&j>=0;i++,j--)
    {
        if(arr[i][j]==1)
        {
            return false;
        }
    }
    return true;
}
bool check(int arr[][25],int i, int j,int n)
{
    for(i=i+1;i<n;i++)
    {
        if(arr[i][j]==1)return false;
        else return true;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n][25]={0};
    int i,j,ctr;
    for(j=0;j<n;j++)
    {
        ctr=0;
        for(i=0;i<n;i++)
        {
            if(check(arr,i,j,n))
            {
            if(isavailable(arr,i,j))
            {   if(arr[i][j]==1){arr[i][j]=0;}
                else{
                arr[i][j]=1;ctr=1;
                break;
                }
            }
            }
        }
        if(ctr==0)
        {
            j=j-2;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}




