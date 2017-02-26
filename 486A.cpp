#include<iostream>
#include<math.h>
using namespace std;
main(){
	long long int n;
	cin>>n;
	long long int ans;
	if(n%2==0)
		ans=n/2;
	else
		ans=(n+1)/2*(-1);
	cout<<ans<<endl;
}
