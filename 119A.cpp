#include<iostream>
using namespace std;
int gcd(int n1,int n2){
	while(n1 != n2){
        	if(n1 > n2)
            		n1 -= n2;
        	else
            		n2 -= n1;
    	}
	return n1;
}
main(){
	int a,b,n;
	cin>>a>>b>>n;
	int count=0;
	int x;
	while(1){
		count+=1;
		if(count%2 !=0)
		 	x= gcd(a,n);
		else
			x=gcd(b,n);
		if(n>x)
			n-=x;
		else
			break;
	}
	if(count%2==0)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
}
