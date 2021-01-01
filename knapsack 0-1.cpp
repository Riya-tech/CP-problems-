#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int w[], int val[], int n,int DP[][1000])
{

        static int i=0;

        if(DP[n][W]!=0)return DP[n][W];

           if (n==0 || W==0)
             {
                 return 0;
             }
           else if (w[n-1] <= W)
           {
               DP[n][W] = max(val[n-1] + knapsack(W-w[n-1],w,val,n-1,DP),  knapsack(W,w,val,n-1,DP));

           }

           else
           {
               DP[n][W] = knapsack(W,w,val,n-1,DP);
           }

             return DP[n][W];

}



 int main()
 {
    int i,j,n;
    cin>>n;
    int val[n],w[n];
    for(i=0;i<n;i++)cin>>val[i];
    for(i=0;i<n;i++)cin>>w[i];
    int fw;
    cin>>fw;
    int DP[n+1][1000]={0};

    cout<<knapsack(fw,w,val,n,DP)<<endl;
    int res= knapsack(fw,w,val,n,DP);
     for (i = n; i > 0 && res > 0; i--) {

        // either the result comes from the top
        // (K[i-1][w]) or from (val[i-1] + K[i-1]
        // [w-wt[i-1]]) as in Knapsack table. If
        // it comes from the latter one/ it means
        // the item is included.
        if (res == DP[i - 1][fw])
            continue;
        else {

            // This item is included.

            cout<<w[i-1]<<" ";

            // Since this weight is included its
            // value is deducted
            res = res - val[i - 1];
            fw = fw - w[i - 1];
        }
     }

  return 0;
 }
