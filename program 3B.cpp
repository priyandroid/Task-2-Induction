//TASK 3B


# include<bits/stdc++.h>
using namespace std;
# define ll long long int  
bool comp(ll a,ll b){
    return a>b;
}

int main(){
    
    ll n,m,i;
    cin>>n>>m;
    std::vector<ll> vec ;
    
    for(i=0;i<m;i++){
        ll num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end(),comp);
   while(vec.size()!=n){
       ll x= vec.back();
       vec.pop_back();
       ll y= vec.back();
       vec.pop_back();
       
       if(vec.back()<(x+y))
       { vec.push_back(x+y);
        sort(vec.begin(),vec.end(),comp);
       }
       else vec.push_back(x+y);
       
    }
    cout<<vec.back();
   
    return 0;
   
    
}