#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    
   int m2=INT_MAX;
    for(int i=0;i<n;i++){
    	cin>>arr[i];	
	}
	m2=arr[0];
    cout <<"m2 is: "<<m2 <<endl;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m2)m2=arr[i];
      
    }    cout<<"Maximum ELEMENT : "<<m2;

}
