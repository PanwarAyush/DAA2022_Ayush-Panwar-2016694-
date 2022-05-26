#include<bits/stdc++.h>
using namespace std;
vector<bool>visited;
vector<int>path;
int source,dest;
void dfs(vector<vector<int> >&graph,int vertix){
 if(visited[vertix]||visited[dest])return;
 path.push_back(vertix);
 visited[vertix]=1;
 for(auto& i:graph[vertix])dfs(graph,i);
}
int main(){
  int n,s,e;
  vector<vector<int> >graph(n);
  visited.resize(n,0);
  cout<<"Enter the size of the edge list of the graph :";
  cin>>n;
  cout<<"Enter the edges of the graph";
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
    graph[i[1]].push_back(i[0]);
  }
  cout<<"Input the source vertix:";
  cin>>s;
  cout<<"Input the destination vertix:";
  cin>>e;
  source=s;
  dest=e;
  dfs(graph,s);
  if(visited[e]){
    cout<<"Yes path exits and it follows the path : ";
    for(int i=0;i<path.size()-1;i++){
     cout<<path[i]<<"->";
    }
   cout<<path.back();
  }
  else {
    cout<<"Path does not exist ";
  }
}
