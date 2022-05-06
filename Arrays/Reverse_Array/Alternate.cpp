#include<bits/stdc++.h> 
using namespace std;
int main(){
    int i,size,temp,start=0,end;
    cout <<"Enter the size";
    cin>>size;
    end=(size-1);
    int arr[size];
    cout <<"Enter the elements of the array";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    while( start < end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
   
   for(i=0;i<size;i++){
       
        cout<<arr[i]<<", ";
    }
return 0;
}