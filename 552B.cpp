#include<bits/stdc++.h>
using namespace std;
main(){
	long long int x,n,i;
	cin>>n;
	x=n;
	long long int digits=0,tot=0;
	while(x){
		x/=10;
		digits++;	
	}
	if(digits==1){
		cout<<n<<endl;
		return 0;
	}
	else{
		tot+=digits*(n-pow(10,digits-1)+1);
		digits--;
		for(i=0;i<digits;i++){
			tot+=(i+1)*9*pow(10,i);
			
		}
	}
	cout<<tot<<endl;
}
