#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>arr,int ele){
for(int i=0;i<arr.size();i++){
if(arr[i]==ele)
return i;
}
return -1;
}
int main(){
int n,num,ele,ind;
cout<<"Enter the size of the array:";
cin>>n;
vector<int>arr;
cout<<"Input elements into the array:\n";
for(int i=0;i<n;i++){
cin>>num;
arr.push_back(num);
}
cout<<"Search element: ";
cin>>ele;
ind=linearSearch(arr,ele);
if(ind==-1){
cout<<"Element not found\ntotal number of comparisons: "<<n;
}
 else{
 cout<<"Element found at index :"<<ind;
 cout<<"\nNumber of comparisons :"<<ind+1;
 }
 return 0;
}