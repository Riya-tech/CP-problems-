// Given a string and a positive number k, find the length of longest substring of given string containing k distinct characters.

#include <bits/stdc++.h>
using namespace std;


bool check(int t, int j, map<char,int> freq,string str)
{
    int i;
    for(i=t;i<=j;i++)
    {
        if(!freq[str[i]])return true;
    }
    return false;

}

int main()
{
    string str;
    int k,i,j,distinct=0;
    cin>>str>>k;
    map<char,int> freq;
    j=0;
    int ans=0;
    for(i=0;i<str.size();i++)
    {
       while(j<str.size() && distinct<=k)
        {
            freq[str[j]]++;
            if(freq[str[j]]==1)distinct++;
            j++;
        }
        distinct--;j=j--;freq[str[j]]--;j--;
        ans=max(ans,j-i);
        freq[str[i]]--;
        if(check(i+1,j,freq,str)){j++;distinct--;}

    }
    cout<<ans;

    return 0;
}

