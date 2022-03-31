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
int cmp=0,j=0,temp;
for(int i=1;i<n;i++){
  j=i-1;
  temp=arr[i];
while(j>=0&&temp<arr[j]){
 arr[j+1]=arr[j];
 j--;
cmp++;
}
 arr[j+1]=temp;
cmp++;
}
cout<<"Sorted array :";
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<endl<<"Number of comparisons : "<<cmp;
return 0;
}