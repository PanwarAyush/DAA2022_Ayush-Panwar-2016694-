/*given a sorted array of +ve integers containing few duplicate elements . Design a 
*algorithm and implement it using a program to find whether a given key is present in
*array or not . If it is present you have to find out total number of copies of given 
*key...
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int totalCopies(vector<int>&arr,int key){
int copies=0,n=arr.size();
for(int i=0;i<n;i++){
 if(key==arr[i])
   copies++;
}
 return copies;
}
void inputVector(vector<int>&v){
  for(int &i:v)
  cin>>i;
}
int main()
{
 int n,key,cop;
 cout<<"Enter the size of the array:";
 cin>>n;
 cout<<"Input sorted elements of size :"<<n<<endl;
 vector<int>arr(n);
 inputVector(arr);
 cout<<"input a key :";
 cin>>key;
 cop=totalCopies(arr,key);
 cout<<"Number of keys found :"<<cop;
 return 0;    
}