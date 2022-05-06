#include<bits/stdc++.h>
using namespace std;
int maximum_number(int arr[],int size){
int max=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]>max)
    max=arr[i];
}
return max;
}
int minimum_number(int arr1[],int size1){
int min=arr1[0];
for(int i=0;i<size1;i++){
    if(arr1[i]<min)
    min=arr1[i];
}
return min;
}
int main(){
int N;
cout<<"Enter the size of the array";
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
cout<<"The maximum Number in the arraY is :- "<<maximum_number(arr,N)<<endl;
cout<<"The minimum Number in the arraY is :- "<<minimum_number(arr,N)<<endl;
return 0;
}
