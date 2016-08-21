#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
   vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++)
       cin >> a[a_i];
    
    if(n==1)
        cout<<"2\n";
    else if(n==2){
        if(a[0]==a[1])
            cout<<"2\n";
        else 
            cout<<"1\n";
    }else {
        int tot=0;
       for(int i =0;i<n;i++)
           tot+=a[i];
        int tmp=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>tmp)
                tmp=a[i];
        }
        if(tot<= 2*tmp){
            cout<<"1\n";
        }
        else
            cout<<"0\n";        
     }
    return 0;
}