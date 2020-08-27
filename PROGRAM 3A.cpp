//TASK 3 PROGRAM 1



#include <bits/stdc++.h>

using namespace std;
# define ll long long int
# define MAX 100001
ll sumDigit(ll num){
    ll sum=0;
    while(num>0){
        
        sum+=(num%10);
        num/=10;           //storing n in string as its of 10^(10^5) order 
    }
    return sum;
}
int main()
{ 
    string str="";
   ll i=0,ans=0,sum=0;
   cin>>str;
  
   
   
 ll len=str.length();
if(len ==1)
cout<<ans;
else{
 for(i=0;i<len;i++)      
 sum+=str[i]-'0';           
 ans++;
 
                     
                
 while((sum/10)!=0){          //once we get sum of string its max value won't exceed 9*(10^5) so                            //now we can  normally sum the digits until it n becomes single digit                              //and count no of stepsit takes to reach the result
     sum=sumDigit(sum);
     ans++;
 }
}
    cout<<ans;
    return 0;
}








