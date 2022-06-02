#include<iostream>
#include<queue>
using namespace std;
int main(){
  int n,compute=0,a,b;
  cin>>n;
  int s[n];
  priority_queue<int,vector<int>,greater<int>>pq;
  for(int &i:s)cin>>i,pq.push(i);
  while(pq.size()>1){
    a=pq.top();
    pq.pop();
    b=pq.top();
    pq.pop();
    compute+=a+b;
    cout<<a+b<<endl;
    pq.push(a+b);
  }
  cout<<compute;
}
