#include<bits/stdc++.h>
using namespace std;

int count(long long int n){
	long long int i;
	int f=1;
    	if(n==1)
        	return 1;
    	else{
        	for(i=2;i<=(n/2);i++){
            		if(n%i == 0)
               		f++;
			if(f>=3)
				return(f+1);
        	}
		return (f+1);
    	}
}

main(){
	int n,i;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++){	
		cin>>arr[i];
		int x=count(arr[i]);
		if(x==3)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
