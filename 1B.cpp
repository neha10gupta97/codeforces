#include<bits/stdc++.h>
using namespace std;
main(){
	int q,i;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		int type=0,flag=0;
		int n=s.length();
		for(i=0;i<n;i++){
			if(s[i]<=57) flag=1;
			if(flag==1 && s[i]>=65){
				type=1;break;}
		}
		if(type==1){
			i=1;string ans;
			string row;int col=0;
			while(s[i]!='C')
				row+=s[i++];
			i++;
			while(i<n){
				col*=10;
				col+=s[i++]-'0';}
			while(col){
				ans+=(col-1)%26 +'A';
				col=(col-1)/26;}
			reverse(ans.begin(),ans.end());
			ans+=row;
			cout<<ans<<endl;
		}
		else{
			i=0;string col,row;
			int ans=0;
			while(s[i]>57)
				col+=s[i++];
			while(i<n)
				row+=s[i++];
			i=0;n=col.length();
			while(i<n){
				ans*=26;
				ans+=col[i++]-'A'+1;
			}
			
			cout<<"R"<<row<<"C"<<ans<<endl;
		}
	}
}
				
