#include<string>
#include<iostream>

using namespace std;
int main(){
	string n="anubhav is good ";
	cout<<"we will change \n 1.A to B \n 2.O to T  \n 3.G to Y ";
    // string b; 
	int e=n.length()-1;
    for(int i=0;i<=e;i++){
		
		if(n[i]=='a'){
			n[i]='B';
		}
		else if(n[i]=='o'){
			n[i]='T';
		}
		else if(n[i]=='G'){
			n[i]='Y';
		}
	}
	cout<<n;
	return 0;
} 
