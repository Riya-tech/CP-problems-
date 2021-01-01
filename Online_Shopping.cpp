//https://www.codechef.com/problems/COUPON

#include <bits/stdc++.h>
using namespace std;
const long long int maxn = LONG_LONG_MAX;
#define mod 1000000007
#define ll long long int 
#define f(i,b) for(ll i=0;i<b;i++)
 
 
int main()
{
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
            ll n,m,mint;
            cin>>n>>m;
            ll price[n][m],discount[n][m],answer[n][m];//answer[i][j] -> total amount of money spent on buying i items in shop j
                    
            f(i,n)
            {   
                f(j,m)
                {
                    cin>>price[i][j];
                }
               
            }
            f(i,n)
            {
                f(j,m)
                {
                    cin>>discount[i][j];
                }
            }
            mint=price[0][0];
            f(j,m) {answer[0][j]=price[0][j];mint=min(mint,price[0][j]);}
            ll mink=mint;
            ll k;
            //mint stores min of previous item, mink stores min of current item
            for(ll i=1;i<n;i++)
            {
                mint= mink;
                mink=maxn;
                f(j,m)
                {
                    k= price[i][j]-discount[i-1][j];
                    if(k<0){k=0;}
                    answer[i][j]=min((answer[i-1][j]+k),(mint + price[i][j]));
                    mink=min(mink,answer[i][j]);
                }
            }
            
            cout<<mink<<endl;


            
                
            
    }
return 0;
}