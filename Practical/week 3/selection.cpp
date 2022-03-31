
/*perform insertion sort , selection sort and bubble sort and find out the total number of  comparisions*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
} 
int cmp=0,key,ind;
for(int i=0;i<n-1;i++){
  key=arr[i];
  ind=i;
for(int j=i+1;j<n;j++){
  if(arr[j]<key){
    key=arr[j];
    ind=j;
  }
}
  swap(arr[i],arr[ind]);
  cmp++;
}
cout<<"Sorted array :";
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<endl<<"Number of comparisons : "<<cmp;
return 0;
}