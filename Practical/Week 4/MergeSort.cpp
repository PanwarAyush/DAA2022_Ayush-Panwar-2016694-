/*Week 4 
 (1)Merge sort 
 (2)Quick sort 
 (3)Given an unsorted array of integers Design a algorithm and implement it using a program to find Kth smallest and largest element from the array*/
#include<iostream>
#include<vector>
using namespace std;

class MergeSort{
private:
   vector<int>arr,brr;
   int l;
public:
   MergeSort(){
   l=0;
   }
   void inputVector(){
      cout<<"Input the size of the array : ";
	  cin>>l;
	  int temp;
      cout<<"Input Elements into the array :\n";
      for(int i=0;i<l;i++){
	    cin>>temp;
		arr.push_back(temp);
		brr.push_back(0);
      }
   }
   void sortMerge(){
      sortAndMerge(0,l-1);
   }
   void sortAndMerge(int i,int j){
    if(i<j){
	  int mid=i+(j-i)/2;
	  sortAndMerge(i,mid);
	  sortAndMerge(mid+1,j);
	  merge(i,mid,j);
	}
   }
   void merge(int i,int mid,int j){
     int k=i,m=i,n=mid+1;
	 while(m<=mid&&n<=j){
        if(arr[m]<arr[n])
	     brr[k++]=arr[m++];	
		  else
		  brr[k++]=arr[n++];
	 }
	 while(m<=mid)
	   brr[k++]=arr[m++];
     while(n<=j)
	  brr[k++]=arr[n++];
     for(int a=i;a<k;a++)
	  arr[a]=brr[a];
	 }
	 void display(){
	  cout<<" Sorted array : ";
	  for(int i=0;i<l;i++)
	    cout<<arr[i]<<" ";
	 }
};
int main(){
  MergeSort *m=new MergeSort();
  m->inputVector();
  m->sortMerge();
  m->display();
  return 0;
}
