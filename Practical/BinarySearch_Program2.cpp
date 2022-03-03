#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>arr,int ele){
int j=arr.size()-1;
int i=0,mid;
while(i<=j){
mid=i+(j-i)/2;
if(arr[mid]==ele)
	return mid;
else if(arr[mid]>ele)
	j=mid-1;
else 
	i=mid+1;
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
ind=BinarySearch(arr,ele);
if(ind==-1){
cout<<"Element not found ";
}
 else{
 cout<<"Element found at index :"<<ind;
 //cout<<"\nNumber of comparisons :"<<ind+1;
 }
 return 0;
}