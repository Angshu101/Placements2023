#include<bits/stdc++.h>
using namespace std;
void Intersection(int arr[],int array[],int size1,int size2){
    vector<int> intersection_array;
     for(int i=0;i<size1;i++){
      for(int j=0;j<size2;j++){
          if(arr[i]==array[j]){
              intersection_array.push_back(arr[i]);
          }
      }
      
  }
  cout<<"The Intersection of the array is:- "<<endl;
    for (auto i = intersection_array.begin(); i != intersection_array.end(); ++i)
        cout << *i << " ";

}
//set is the brute force method complexity O(size1*log(size1)+size2*log(size2))
void Union(int arr[],int array[],int size1,int size2){
    set<int> union_array;
    for(int i=0;i<size1;i++){
        union_array.insert(arr[i]);
    }
    for(int i=0;i<size2;i++){
        union_array.insert(array[i]);
    }
   cout << "Number of elements after union operation: " << union_array.size() << endl;
      cout << "The union set of both arrays is :" << endl;
    for (auto itr = union_array.begin(); itr != union_array.end(); itr++)
        cout << *itr
             << " "; 

}
//Usinf Map datastructure O(m+n)
void printUnion(int* a, int n, int* b, int m)
{
     
    // Defining map container mp
    map<int, int> mp;
   
    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i });
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first
             << " "; // mp will contain only distinct
                     // elements from array a and b
}
int main(){
int N1,N2;
cout<<"Enter the size of the First array";
cin>>N1;
cout<<"Enter the size of the Second array";
cin>>N2;
int arr[N1],arr2[N2];
cout<<"Enter First array";
for(int i=0;i<N1;i++){
    cin>>arr[i];
}
cout<< endl;
cout<<"Enter Second array";
for(int j=0;j<N2;j++){
    cin>>arr2[j];
}
cout<<endl;
Union(arr,arr2,N1,N2);
cout<<endl;
Intersection(arr,arr2,N1,N2);
cout<<endl;
printUnion(arr,N1,arr2,N2);

return 0;
}


