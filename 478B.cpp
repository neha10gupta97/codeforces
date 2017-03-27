#include<bits/stdc++.h>
using namespace std;
main(){
	long long int n,m;
	cin>>n>>m;
	long long int kmin,x=n/m;
	kmin=(m-n%m)*(x*(x-1)/2)+(n%m)*(x*(x+1)/2);
	long long int kmax=n-m+1;
	kmax=kmax*(kmax-1)/2;
	cout<<kmin<<" "<<kmax<<endl;
} 
