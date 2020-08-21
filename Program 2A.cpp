//TASK 2A LONGEST PROPER PREFIX


#include <bits/stdc++.h>

using namespace std;
# define ll long long int

int main()
{  
    int t;
    char x='<',y= '>';
    cin>>t;
    
    while(t--){
        string str;
        cin>>str;
        ll i=0,c1=0,c2=0,ans=0;// c1 and c2 store count of occurence of > and <

        while(i<str.length()){
//count c1 and c2 unless they become equal i.e.we get a valid sequence 

            if(str[i] == x)
             c1++;
             
           else if( c2<=c1 )
            c2++;
            
        
        if(c1<c2)
         break;
       
         if(c1 ==c2)
        {
            ans=max(ans,2*c1);
            c1=0;
            c2=0;
        }
       i++;
        
        }
        cout<<ans<<endl;
    }
    

    return 0;
}
