#include<iostream>
using namespace std;

void print(int arr[],int n, int start=0){    
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;

    print(arr,n);
    cout<<endl;
    print(arr,n,2);

    return 0;
}