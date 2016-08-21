#include "bits/stdc++.h"
using namespace std;


int main() {
    
    int n;
    cin>>n;
    long long int a[n];
    long long int b[n];
    long long int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum1+=a[i];
 }
    for(int i=0;i<n;i++){
        cin>>b[i];
        sum2+=b[i];
  }
if(sum1!=sum2){
   
    cout<<"-1";
   
}else{
    
    sort(a,a+n);
    sort(b,b+n);

        unsigned long long int ans=0;

        for(int i=0 ;i<n;i++){

            if((long long int)a[i]-b[i]>0)
                ans+=a[i]-b[i];

        } 

           cout<<ans;

    }
  return 0;
}