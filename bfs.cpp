#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int e;
    cin>>e;
    int a,b;
    vector<int> adj[n+1];
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ->";
        for(auto x:adj[i])
        {
            cout<<x;
        }
        cout<<endl;
    }
    //Until the graph traversal
    queue<int> que;
    bool visited[n];
    memset(visited,false,sizeof(visited));
    int start;
    cout<<"Enter starting node"<<endl;
    cin>>start;
    que.push(start);
    visited[start]=true;
    while(!que.empty())
    {
        int front=que.front();
        cout<<front<<" ";
        que.pop();
        for(auto it:adj[front])
        {
            if(visited[it]==false)
            {
                visited[it]=true;
                que.push(it);
            }
        }
    }
}
