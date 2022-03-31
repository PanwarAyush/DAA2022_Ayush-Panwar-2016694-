/*Given an unsorted array of integers Design a algorithm and implement it using a program to find Kth smallest and largest element from the array*/
#include<iostream>
#include<vector>
using namespace std;

class kthElement{
private:
   vector<int>arr,brr;
   int l;
public:
   kthElement(){
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
      mergeSort(0,l-1);
   }
   void mergeSort(int i,int j){
    if(i<j){
	  int mid=i+(j-i)/2;
	  mergeSort(i,mid);
	  mergeSort(mid+1,j);
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
	 void displayKthSmallest(){
	   int k;
	   cout<<"Input the value of k from the range ["<<1<<","<<l<<"] :";
	   cin>>k;
	   if(k>l||k<1){
	    cout<<"INVALID RANGE !"<<endl;
		return;
	   }
	   cout<<"kth smallest element is :"<< arr[k-1]<<endl;
	 }
	 void displayKthLargest(){
	   int k;
	   cout<<"Input the value of k from range ["<<1<<","<<l<<"] :";
	   cin>>k;
	   if(k>l||k<1){
	    cout<<"INVALID RANGE !"<<endl;
		return;
	   }
	   cout<<"kth largest element is :"<< arr[l-k]<<endl;
	 }
	 void display(){
	  cout<<"Sorted array : ";
	  for(int i=0;i<l;i++)
	    cout<<arr[i]<<" ";
	 cout<<endl;
	 }
};
int main(){
  kthElement *m=new kthElement();
  m->inputVector();
  m->sortMerge();
  m->display();
  m->displayKthLargest();
  m->displayKthSmallest();
  return 0;
}
