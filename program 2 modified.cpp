//TASK 3 PROGRAM 2
#include <bits/stdc++.h>

using namespace std;
# define ll long long int
int main()
{
    int n;
    ll m,i,ans=0;
    cin>>n>>m;
    ll arr[m],sum[m];
    for(i=0;i<m;i++)
        cin>>arr[i];
        
    sort(arr,arr+m);
    sum[0]=arr[0];
    
    for(i=1;i<m;i++)              //prefix sum
    sum[i] = sum[i-1]+arr[i];
    
    if(n==1)
    cout<<sum[m-1];
    
    else{
       for(i=m/2 -1;i<m-1 ;i++)          // for n=2 we need to divide array into 2 parts such that difference between 
                                           //their elements sum is minimum, in this particular case the minimum 
                                           //element sum would be ans
        ans=max(ans,min(sum[i],sum[m-1]-sum[i]));
    
    }
    cout<<ans;
   
    

    return 0;
}
