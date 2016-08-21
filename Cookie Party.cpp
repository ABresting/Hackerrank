#include "bits/stdc++.h"

using namespace std;

int main(){

	long long int m,n;
	cin>> n >> m;
	
	if(m%n==0)
		cout<<"0\n";
	else if(n>m)
		cout<<n-m<<endl;
	else 
		cout<<n-(m%n)<<endl;

	return 0;
}