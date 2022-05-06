#include<bits/stdc++.h> 
using namespace std;
int main(){
    int size,temp,i;
    cout <<"Enter the size";
    cin>>size;
    int arr[size];
    cout <<"Enter the elements of the array";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-(i+1)];
        arr[size-(i+1)]=temp;
    }
   for(i=0;i<size;i++){
       
        cout<<arr[i]<<", ";
    }
return 0;
}