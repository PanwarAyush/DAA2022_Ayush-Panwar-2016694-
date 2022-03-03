/*Given an array of non negative integers , Design a linear algorithm and implement it using 
 * a Program to find whether a given element id present in array or not and also find out total
 * number of comparisons . 
 * Example-> 
 *  search element =2
 *  size : 7 
 *  array elements: 5,6,8,2,1,9, 25
 *  the key is present at index 3
 *  Number of comparisons : 4
 */
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