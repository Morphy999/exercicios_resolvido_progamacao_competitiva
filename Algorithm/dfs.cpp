#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii; // we will frequently use these two data type shortcuts
typedef vector<ii> vii;
#define TRvii(c, it) (auto it = (c).begin(); it != (c).end(); it++);
#define REP(i, a, b)                       \
    for (int i = int(a); i <= int(b); i++) \
        ;

#define V 100;        
int dfs_num[V];
int DFS_WHITE = -1;
int DFS_BLACK = 1;

void dfs(int u)
{   
    printf(" %d", u);
    dfs_num[u] = DFS_BLACK;                 // this vertex is visited, mark it
    TRvii(AdjList[u], v)                  // try all neighbors v of vertex u
        if (dfs_num[v->first] == DFS_WHITE) // avoid cycle
        dfs(v->first);                      // v is a (neighbor, weight) pair
}


int FINDING_CONECTED_COMPONENTS_IN_SIMPLE_GRAPH(){
    int numComp = 0;
    memset(dfs_num,DFS_WHITE,sizeof dfs_num);
    REP(i,0,V-1){
        if(dfs_num[i] == DFS_WHITE){
            numComp++;
            dfs(i);
        }
    }
return numComp++;
}





int main()
{

    return 0;
}