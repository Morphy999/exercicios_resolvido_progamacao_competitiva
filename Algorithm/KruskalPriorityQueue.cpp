#include <bits/stdc++.h>

using namespace std;


#define REP(i, a, b) for (int i = int(a); i <= int(b); i++)
typedef pair<int, int> ii;
priority_queue< pair<int, ii> > EdgeList;

class UnionFind
{

    vector<int> pset;

public:
    void initSet(int _size)
    {
        pset.resize(_size);
        REP(i, 0, _size - 1)
        pset[i] = i;
    }
    int findSet(int x) { return (pset[x] == x) ? x : (pset[x] = findSet(pset[x])); }
    void unionSet(int x, int y) { pset[findSet(x)] = findSet(y); }
    bool sameSet(int x, int y) { return findSet(x) == findSet(y); }
};


void Kruskal(){
    for(int i = 0;i < NumeroDeArestas;i++){
        EdgeList.push(make_pair(-weight,make_pair(v,u)));
    }
UnionFind Uf;
int mst_cost = 0;
Uf.iniset(V); // all V are disjoint sets initially
while(!EdgeList.empty()){
    pair<int, ii> front = EdgeList.top(); EdgeList.pop(); // / while there exist more edges, O(E)
    if(!Uf.sameSet(front.second.first,front.second.second)){ // if no cycle
        mst_cost += (-front.first); //add (negated) -weight of e to MST
        Uf.unionSet(front.second.first,front.second.second); // link these two vertices
    }
}

}



int main(){



    return 0;
}

