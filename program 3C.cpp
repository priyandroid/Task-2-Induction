//TASK 3 PROGRAM 3

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

   ll count=findTotalprime(n);            //function to calculate total no of prime no in a given range
   cout<<(count*(count+1))/2;            //for a given range 'n' in order to minimise the sum of distinct Ci we will initialise every i i.e. prime 
                                         //and its multiple with same value ,this keeps care of the condition that for(i,j) if  co-prime then
                                          //Ci !=Cj
   //So basically need just calculate no of prime in a given range(let it be k) and find sum of first k natural no(to keep the sum min)  !!

    return 0;
}
