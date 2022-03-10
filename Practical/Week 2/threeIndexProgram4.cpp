/*given a sorted array of +ve integers design a algorithm and implement it using a 
 *program to find three indexes i, j, k such that array[i]+array[j]==array[k]
 */ 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeIndex(vector<int>&arr){
	int n=arr.size();
	vector<vector<int>>ans;
 for(int i=0;i<n-2;i++){
	 for(int j=i+1;j<n-1;j++){
		 for(int k=j+1;k<n;k++){
			 if(arr[i]+arr[j]==arr[k]){
				 ans.push_back({i,j,k});
			 }
		 }
	 }
 }
 return ans;
}
void inputVector(vector<int>&v){
  for(int &i:v)
  cin>>i;
}
int main()
{
 int n;
 vector<vector<int>>indexes;
 cout<<"Enter the size of the array:";
 cin>>n;
 cout<<"Input sorted elements of size :"<<n<<endl;
 vector<int>arr(n);
 inputVector(arr);
 indexes=threeIndex(arr);
 if(arr.size()==0){
	 cout<<"No such indexes found:";
 }else{
	 cout<<"All possible indexes are:\n";
 for(vector<int>i:indexes){
  cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl; 	 
 }
 }
 return 0;    
}