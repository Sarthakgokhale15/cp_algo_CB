#include <bits/stdc++.h>
using namespace std ; 
 
 class Solution {
     public:
     long long numberOfWays(long long n){
      
      //base case for
      if(n==1 || n==0 || n==2) return n;

      int ans1=numberOfWays(n-1);
      int ans2=numberOfWays(n-2);  
       return ans1+ans2;
     }
  
 };
int main()
{
    
long long n;cin>>n;
Solution ob;
cout<<ob.numberOfWays(n)<<endl;
    return 0;
}