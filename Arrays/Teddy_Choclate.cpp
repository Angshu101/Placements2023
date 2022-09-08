#include<bits/stdc++.h>
using namespace std;
int num(int N,int M,int Teddy[],int choclate[]){
    int max=choclate[0],remaining,k=0;
    vector<int> result;
    for(int i=0;i<N;i++)
    {
        if(M!=0){
          result.push_back(Teddy[i]);
            M=M-Teddy[i];
        }
      
    }
   
}
int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int N,M;
cin>>N;
cin>>M;
int array1[N],array2[N];
for(int i=0;i<N;i++){
    cin>>array1[i];
}
for(int j=0;j<N;j++){
    cin>>array2[j];
}
int p;
p=num(N,M,array1,array2);
cout<<p<<endl;
return 0;
}
