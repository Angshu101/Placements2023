#include<bits/stdc++.h>
using namespace std;
int* sort_array(int arr[],int size){
int* r = new int[size];
int count_zero=0,count_one=0,count_two=0;
// for(int i=0;i<size;i++){
//     if(arr[i]==0)
//     count_zero++;
//     else if(arr[i]==1)
//     count_one++;
//     else
//     count_two++;
// }
for(int i=0;i<size;i++){
    switch (arr[i])
    {
    case 0:
        count_zero++;
        break;
    case 1:
         count_one++;
         break;
    case 2:
         count_two++;
         break;
    
    default:
        break;
    }
}
int i=0;
while(count_zero>0){
r[i]=0;
i++;
count_zero--;
}
while(count_one>0){
    r[i]=1;
    i++;
    count_one--;
}
while(count_two>0){
    r[i]=2;
    i++;
    count_two--;
}
return r;
}
int main(){
int N;
cout<<"Enter the size of the array";
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
int* p;
p=sort_array(arr,N);
cout<<"The sorted arraY is :- "<<endl;
for(int i=0;i<N;i++){
    cout<<p[i]<<" ,";
}
delete[] p;
return 0;
}
