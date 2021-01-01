//https://codeforces.com/problemset/problem/41/B
#include <bits/stdc++.h>
using namespace std;
const long long int maxn = pow(10,9);
#define ll long long int
#define f(i,b) for(ll i=0;i<b;i++)


int main()
{
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
            ll n,b,j,k,maxi,lmax=0;
            cin>>n>>b;
            ll a[n];
            f(i,n)
            {cin>>a[i];}
            maxi = b;
            f(i,n-1)
            {
                lmax=0;
                for (j=i+1; j <n ; j++)
                {
                    lmax=max(lmax,a[j]);
                }
                maxi=max(maxi,((b)/(a[i]))*lmax + b%a[i]);

            }
            cout<<maxi;


return 0;
}
