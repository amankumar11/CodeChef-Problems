#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int T;
	cin>>T;
    long long int N[T];
	long long int x[T];
	long long int k[T];
	for(long long int i=0;i<T;i++){
	    cin>>N[i]>>x[i]>>k[i];
	}
	for(long long int i=0;i<T;i++){
	    long long int c=0;
	    for(long long int z=1;(z*k[i])<=(N[i]+1);z++){
	        
	        if(z*k[i]==x[i]){
	            c++;
	        }
	        else if((N[i]+1)-(z*k[i])==x[i]){
	            c++;
	        }
	        
	    }
	    if(c>=1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
	}

