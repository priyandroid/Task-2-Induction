//TASK 2B Max element in an array
//Hacker Mode(1)

#include <bits/stdc++.h>

using namespace std;
# define ll long long int
int main()
{
    ll n,q,i,ans=-1;
    cin>>n>>q;
    ll arr[n+2],left[q],right[q],val[q];
    memset(arr,0,sizeof arr);
    
   for(i=0;i<q;i++){
        // marking beginning and end  of a particular interval with 1 and -1 respectively
        cin>>left[i]>>right[i]>>val[i];
        arr[left[i]]+=val[i];
        arr[right[i] + 1]-=val[i];
        
    }
   // To keep count of occurence of an element  in the query interval using prefix sum
    for(i=1;i<=n;i++)
    arr[i]+=arr[i-1] ;
    
    
    //finding max element 
    for(i=1;i<=n;i++)
    { arr[i]+=i;
    ans= max(ans,arr[i]);
    }
    
cout<<ans;

    return 0;
}

