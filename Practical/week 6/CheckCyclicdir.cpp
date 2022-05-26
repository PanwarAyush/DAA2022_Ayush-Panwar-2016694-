#include<bits/stdc++.h>
using namespace std;
vector<bool>visited;
vector<int>path;
int source,dest;
bool cycleExist=0;
void dfs(vector<vector<int> >&graph,int vertix){
 if(visited[vertix]||cycleExist){
     cycleExist=1;
     return;
 }
 visited[vertix]=1;
 for(auto& i:graph[vertix])dfs(graph,i);
}
int main(){
  int n,s,e;
  vector<vector<int> >graph(n);
  visited.resize(n,0);
  cout<<"Enter the size of the edge list of the graph :";
  cin>>n;
  cout<<"Enter the edges of the graph :"<<endl;
  vector<vector<int> >edgelist;
  for(int i=0;i<n;i++){
    cin>>s>>e;
     vector<int>temp;
     temp.push_back(s);
     temp.push_back(e);
    edgelist.push_back({s,e});
  }
  for(vector<int>& i:edgelist){
    graph[i[0]].push_back(i[1]);
  }
  dfs(graph,s);
  if(cycleExist){
      cout<<"cycle exist in the given directed graph ";
  }
  else{
      cout<<"Cycle does not exist in the given directed graph";
  }
}
