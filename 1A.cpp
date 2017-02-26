#include <iostream>
 
using namespace std;
 
main(){
    double n,m,a;
    long long int total;
    cin>>n;
    cin>>m;
    cin>>a;
 
    double x,y;
    x=n/a;
    y=m/a;
    cout<<x<<" "<<y<<endl;
    if(!(x==(long long int)x)){
        x=x+1;
        cout<<x<<endl;
    }
    if(!(y==(long long int)y))
        y=y+1;
 
    total=(long long int)x *(long long int)y;
 
    cout<<total;
}
