#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
	cout<<"Enter your string: "<<endl;
	string n;
	getline(cin,n);
	int e=n.length()-1;
	int i=0;
	while(i<=e){
		
		if(i==0){
			n[i]=toupper(n[i]);
		}
		if(n[i]==' '){
			n[i+1]=toupper(n[i+1]);
		}
		i++;
	};
	cout << n<< endl;
	
	return 0;
}
