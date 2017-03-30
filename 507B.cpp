#include<bits/stdc++.h>
using namespace std;
main(){
	double r,x1,x2,y1,y2;
	cin>>r>>x1>>y1>>x2>>y2;
	double x=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout<<ceil(x/(2*r))<<endl;
}
