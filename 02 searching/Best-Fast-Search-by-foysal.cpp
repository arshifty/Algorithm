#include <bits/stdc++.h>
using namespace std;

#define inf 10000009

vector<int> G[100];
bool visited[100];
int hu[100],flag=1;

priority_queue<int, vector<int>, greater<int> > min_hu;
vector<int>V;

int get()
{
    for(int i=0; V.size();i++)
    {
        int x=V[i];
        //cout<<"queue :"<<x<<" "<<min_hu.top()<<endl;
        if(hu[x]==min_hu.top())
        {
            V[i]=-1;
            return x;
        }

    }
}

int BFS(int s,int g)
{
    int  u=s;
    visited[s]=1;
    if(flag==1)
    cout<<s;
    for(int i=0; i<G[u].size(); i++)
    {
        // cout<<G[u][i]<<":"<<hu[G[u][i]]<<endl;
        min_hu.push(hu[G[u][i]]);
        V.push_back(G[u][i]);
        //cout<<"ok"<<endl;
    }
    flag=0;
    int v=get();
    //cout<<"v: "<<v<<endl;
    min_hu.pop();
    if(!visited[v])
    {
        cout<<"-> "<<v;
        visited[v]=1;

        if(v==g)
            return 0;
        BFS(v,g);
    }
}


int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        //G[y].push_back(x);
    }
    memset(hu,0,sizeof(hu));
    for(int i=0; i<nodes; i++)
    {
        int a,h;
        cin>>a>>h;
        hu[a]=h;
    }

    memset(visited,0,sizeof(visited));
    //memset(dist,0,sizeof(dist));
    int s,g;
    cin>>s>>g;
    BFS(s,g);
    return 0;
}

/*

14 13
0 1
0 2
0 3
1 4
1 5
2 6
2 7
3 8
8 9
8 10
9 11
9 12
9 13

0 0
1 3
2 6
3 5
4 9
5 8
6 12
7 14
8 7
9 5
10 6
11 2
12 10
13 1

0 9

Path: 0-> 1-> 3-> 2-> 8-> 9

*/



