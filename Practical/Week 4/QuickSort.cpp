#include<iostream>
#include<vector>
using namespace std;
class QuickSort{
private:
   vector<int>arr;
   int l;
public:
   QuickSort(){
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
      }
   }
   void sortQuick(){
      qSort(0,l-1);
   }
   void qSort(int i,int j){
    if(i<j){
	  int pivotIndex=partition(i,j);
	  qSort(i,pivotIndex-1);
	  qSort(pivotIndex+1,j);
	}
   }
   int partition(int i,int j){
      int pivot=j;
	  int t=i;
      for(int k=i;k<j;k++){
	    if(arr[k]<arr[pivot])
		 swap(arr[t++],arr[k]);
      }	  
	  swap(arr[t],arr[pivot]);
	  return t;
   }
	void display(){
	  cout<<"Sorted array : ";
	  for(int i=0;i<l;i++)
	    cout<<arr[i]<<" ";
	 }
};
int main(){
  QuickSort *m=new QuickSort();
  m->inputVector();
  m->sortQuick();
  m->display();
  return 0;
}
