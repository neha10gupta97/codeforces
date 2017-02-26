
#include <iostream>
#include <vector>
using namespace std;

int main(){
	string remix;
	cin >> remix;
	string original = "";
	bool first = false;

	for(int i = 0; i < remix.length(); i++){
		if(remix[i] == 'W' && remix[i+1] == 'U' && remix[i+2] == 'B' ){
			if(first && original[original.length()-1] != ' '){
				original += " ";
			}
			i+=2;
		}else{
			first = true;
			original += remix[i];
		}
	}
	cout << original << endl;
}
