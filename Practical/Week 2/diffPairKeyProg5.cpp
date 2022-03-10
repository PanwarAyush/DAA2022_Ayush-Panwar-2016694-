/*given a array of non negative integers design a algorithm and implement it using a 
 *program to implement it to count the number of pairs of integers such that their
 * differences is equal to the given key and print the pairs.
 */
 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printDiffPair(vector<int>&arr,int key){
	int n=arr.size(),count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			   if(abs(arr[i]-arr[j])==key)
			   {
				   cout<<arr[i]<<" "<<arr[j]<<endl;
				   count++;
			   }
		   }			   
		}
   cout<<"Number of  possible pairs are :" <<count;
}
void inputVector(vector<int>&v){
  for(int &i:v)
  cin>>i;
}
int main()
{
 int n,key;
 vector<vector<int>>indexes;
 cout<<"Enter the size of the array:";
 cin>>n;
 cout<<"Input elements to array of size "<<n<<endl;
 vector<int>arr(n);
 inputVector(arr);
 cout<<"input a key :";
 cin>>key;
 printDiffPair(arr,key);
 return 0;    
}
 