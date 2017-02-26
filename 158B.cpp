#include<iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int arr[n];
	int one=0,two=0,three=0,four=0;
	int cabs=0;
	for (int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1)
			one=one+1;
		else if(arr[i]==2)
			two=two+1;
		else if(arr[i]==3)
			three=three+1;
		else if(arr[i]==4)
			four=four+1;
	}
	cabs=cabs+four+three+two/2;
	one=one-three;
	if(two%2==1){	
		cabs=cabs+1;
		one-=2;
	}	
	if(one>0){
		
		cabs=cabs+(one+3)/4;
	}
	cout<<cabs<<endl;
}
		
	
	
