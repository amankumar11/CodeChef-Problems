#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
    double N[T];
	double x[T];
	double k[T];
	for(int i=0;i<T;i++){
	    cin>>N[i]>>x[i]>>k[i];
	}
	for(int i=0;i<T;i++){
	    long long int c=0;
	    for(int z=1;(z*k[i])<=(N[i]+1);z++){
	        
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

