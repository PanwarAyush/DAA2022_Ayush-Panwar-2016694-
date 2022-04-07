/*You have been given two sorted integers of size m and n design an algorithm to find list of element to find common 
 *elements to both the lists.
 */
#include<iostream>
#include<vector>
using namespace std;
class Common{
  vector<int>arr1,arr2;
  int m,n;
  public:
  Common(){
   m=0;
   n=0;
  }
  void inputVector(){
      cout<<"Input the size of the array 1 : ";
	  cin>>m;
	  int temp;
      cout<<"Input  Elements into the array 1 in non decreasing order:\n";
      for(int i=0;i<m;i++){
	    cin>>temp;
		arr1.push_back(temp);
      }
     cout<<"Input the size of the array 2 : ";
	  cin>>n;
      cout<<"Input sorted Elements into the array 2 in non decreasing order :\n";
      for(int i=0;i<n;i++){
	        cin>>temp;
		arr2.push_back(temp);
      }
  }
 void displayCommonList(){
     int i=0,j=0;
     while(i<m&&j<n){
       if(arr1[i]<arr2[j])
          i++;
       else if(arr1[i]>arr2[j])
          j++;
       else{
         cout<<arr1[i]<<" ";
         i++; 
         j++;  
        }
     }
 }
 };
int main(){
  Common *co =new Common();
  co->inputVector();
  co->displayCommonList();
}