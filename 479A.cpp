	#include<iostream>
	using namespace std;
	main(){
		int a,b,c;
		cin>>a>>b>>c;
		int v=a+b+c;
		int k=a*b+c;
		int w=a+b*c;
		int x=a*(b+c);
		int y=a*b*c;
		int z=(a+b)*c;
		//cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
		int ans=max(k,max(v,max(max(max(w,x),y),z)));
		cout<<ans<<endl;
	}
