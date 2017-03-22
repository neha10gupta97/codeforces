#include<bits/stdc++.h>
#include<string.h>
using namespace std;
main(){
	int n,s,i;
	cin>>n>>s;
	if(n==1 && s==0){
		cout<<"0 0"<<endl;
		return 0;
	}
	if(n==0 ||s==0|| s>n*9){
		cout<<"-1 -1"<<endl;
		return 0;
	}
	int p=s;
	string max="";
	for(i=0;i<n;i++){
		if(s>=9){
			max+='9';
			s-=9;
		}
		else{
			max+=(char)s+48;
			s=0;
		}
	}
	string min="";
	if(max[n-1]!='0'){
		
		for(i=n-1;i>=0;i--){
			min+=max[i];
			}
		cout<<min<<" "<<max<<endl;
	}
	else{
		char min[n+1];
		min[n]='\0';
		min[0]='1';
		p-=1;
		for(i=n-1;i>0;i--){
			if(p>=9){
				min[i]='9';
				p-=9;
			}
			else{
				min[i]=(char)p+48;
				p=0;
			}
		}
		cout<<min<<" "<<max<<endl;
	}
	
}
		
	
		
