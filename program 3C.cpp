/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
# define ll long long int
ll findTotalprime(ll n){
   bool mp[n+1]; 
    unordered_map<ll,ll> prefix;
    memset(mp,true,sizeof mp);
    ll p;
    for(p=2;p*p<=n;p++)
    if(mp[p] ==true)
    {
        for(ll i=2*p;i<= n;i+=p)
        mp[i]=false;
    }
    prefix[0]=0;
    prefix[1]=0;
    for(ll i=2;i<=n;i++){
        prefix[i]=prefix[i-1];
        if(mp[i]==true)
        prefix[i]++;
    }
    return prefix[n];
}
int main()
{  ll n;
cin>>n;

   ll count=findTotalprime(n);
   cout<<(count*(count+1))/2;

    return 0;
}
