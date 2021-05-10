#include <iostream>
using namespace std;

int main() {
    int T;
    int i;
    cin>>T;
    int A[T],B[T],X[T];
    int tempVal[T];
    int tempT[T];
    int finalOut[T];
    for(int i=0;i<T;i++){
        cin>>X[i]>>A[i]>>B[i];
    }
    for(int i=0;i<T;i++){
        tempVal[i] = (100-X[i])*B[i];
        tempT[i] = A[i] + tempVal[i];
        finalOut[i] = tempT[i]*10;
        cout<<finalOut[i]<<endl;
    }
}
