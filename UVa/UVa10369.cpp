#include <bits/stdc++.h>

using namespace std;
double maxx;

#define REP(i, a, b) for (int i = int(a); i <= int(b); i++)

struct Vertice
{
    int x, y;
};

struct Edge
{
    int v, w;
    double peso;
    Edge(int v = -1, int w = -1, double peso = 0) : v(v), w(w), peso(peso) {}
};

bool operator<(const Edge &i, const Edge &j)
{
    return i.peso > j.peso;
}

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

void kruskal(priority_queue<Edge> &arestas, int Numvertices, int satelites)
{
    UnionFind Uf;
    int CCs = Numvertices;
    Uf.initSet(Numvertices);
    while (!arestas.empty())
    {
        Edge s = arestas.top();
        arestas.pop();
        if (!Uf.sameSet(s.v, s.w))
        {
            CCs--;
            Uf.unionSet(s.v, s.w);
            if(maxx < s.peso) maxx = s.peso;
            if (CCs == satelites)
                return;
        }
    }
    return ;
}

double distancia(Vertice a, Vertice b)
{

    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int s, p;
        cin >> s >> p;
        vector<Vertice> vertices;
        Vertice v;
        for (int i = 0; i < p; i++)
        {
            cin >> v.x >> v.y;
            vertices.push_back(v);
        }
        priority_queue<Edge> arestas;
         maxx = -1;
        for (int i = 0; i < vertices.size() - 1; i++)
        {
            for (int j = i + 1; j < vertices.size(); j++)
            {
                Edge e(i, j, distancia(vertices[i], vertices[j]));
                arestas.push(e);
            }
        }
        kruskal(arestas, vertices.size(), s);
        cout.precision(2);
        cout << fixed << maxx << endl;
    }

    return 0;
}