/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
# define ll long long int
int main()
{
    ll n,q,i,ans=-1;
    cin>>n>>q;
    std::vector<pair<ll,ll>> vec ;
    
    while(q--){
        pair<ll,ll> p1;
        pair<ll,ll> p2;
        cin>>p1.first>>p2.first>>p1.second;
        p2.second=p1.second*-1;
        vec.push_back(p1);
        vec.push_back(p2);
        
    }
    
    sort(vec.begin(),vec.end());
    
    for(i=1;i<vec.size();i++)
     vec[i].second+=vec[i-1].second;
    
    for(i=0;i<vec.size();i++)
    { vec[i].second+=(i+1);
           ans=max(ans,vec[i].second);
    }
    cout<<ans;
    
    

    return 0;
}
