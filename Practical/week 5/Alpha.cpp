/*Given an unsorted array of alphabets containing duplicate elements design a algorithm and implement it using  a program to 
 *find which alphabet has maximum number of occurance and print it
 */

#include<iostream>
#include<vector>
using namespace std;
class Alpha{
 vector<char>alp;
 int len;
public:
 Alpha(){
   len=0;
 }
 void inputAlpha(){
  cout<<"Input the size of the alphabet array :";
  cin>>len;
  char ch;
  cout<<"Input "<<len<< " characters\n";
  for(int i=0;i<len;i++){ 
    cin>>ch;
    alp.push_back(ch);
  }
 } 
 void maxOccurence(){
   int arr[123]={0};
   for(int i=0;i<len;i++){
     arr[(int)alp[i]]++;
   }
   int maxoccur=0;
  char maxChar;
   for(int i=0;i<123;i++){
    if(arr[i]>maxoccur){
      maxoccur=arr[i];
      maxChar=(char)i;
     }
   }
   cout<<maxChar<<" Occurs maximum of "<<maxoccur <<" times in the array";
 }
};
int main(){
  Alpha *al=new Alpha();
  al->inputAlpha();
  al->maxOccurence();
  return 0;
}