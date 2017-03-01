#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	int odd=0,even=0;
	int io=0,ie=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even+=1;
			ie=i+1;
		}
		else{
			odd+=1;
			io=i+1;
		}
	}
	if(odd==1)
		cout<<io<<endl;
	else if(even==1)
		cout<<ie<<endl;
}
		
