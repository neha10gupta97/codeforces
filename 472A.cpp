#include<iostream>
#include<math.h>
using namespace std;
int composite(int a){
	int  i;
  	bool isPrime = true;
	for(i = 2; i <=sqrt(a); ++i){
      		if(a % i == 0){
          		isPrime = false;
          		break;
      		}
  	}
  	if (isPrime)
      		return 0;
  	else
  	    return 1;
}
main(){
	int n;
	cin>>n;
	int i,x,y;
	for(i=4;i<n;i++){
		x=i;y=n-i;
		if(composite(x)&&composite(y)){
			cout<<x<<" "<<y<<endl;
			return 0;
		}
	}
}

