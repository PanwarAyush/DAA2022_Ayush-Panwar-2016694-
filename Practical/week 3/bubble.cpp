
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
int cmp=0;
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
  if(arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);
    cmp++;
  }
}
}
cout<<"Number of comparisons : "<<cmp;
return 0;
}