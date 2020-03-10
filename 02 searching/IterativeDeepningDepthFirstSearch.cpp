#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visit[100]={0};
int flag=1;
int IDS(int at,int g,int d)
{
    if(d>0)
        {
            if(visit[at]) return 0;
            visit[at]=1;
            cout<<at<<" ";
            //if(at==g) flag=0;
                    for(int i=0;i<adj[at].size();i++)
                    {
                        if(flag==1)
                            IDS(adj[at][i],g,d-1);
                    }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int s,g,d;
    cin>>s>>g;
    cin>>d;
    IDS(s,g,d);

    return 0;
}

/*
7 6
1 2
1 3
2 4
2 5
3 6
3 7
1 3
2

Path: 1 2 3


*/

