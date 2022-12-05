#include <bits/stdc++.h>

using namespace std;

typedef double tipoPeso;


class UnionFind
{
private:
    vector<int> representante;

public:
    void createSet(int tam)
    {
        representante.resize(tam);
        for (int i = 0; i < tam; i++)
            representante[i] = i;
    }
    int findSet(int elemento)
    {
        if (representante[elemento] == elemento)
            return elemento;
        representante[elemento] = findSet(representante[elemento]);
        return representante[elemento];
    }
    void mergeSets(int i, int j)
    {
        representante[findSet(i)] = findSet(j);
    }
    bool isSameSet(int i, int j)
    {
        return (findSet(i) == findSet(j));
    }
};
struct Vertice
{
    double x, y;
};

struct Edge
{
    int v, w;
    tipoPeso peso;
    Edge(int v = -1, int w = -1, tipoPeso peso = 0) : v(v), w(w), peso(peso) {}
};

bool operator<(const Edge &i, const Edge &j)
{
    return i.peso < j.peso;
}
int Kruskal(vector<Edge> &arestas, vector<bool> &arestasUtilizadas, int numVerticesGrafo,vector<Edge> &ArestasUsadas)
{
    arestasUtilizadas = vector<bool>(arestas.size(), false);
    sort(arestas.begin(), arestas.end());

    UnionFind conjuntos;
    conjuntos.createSet(numVerticesGrafo);
    for(int i = 0;i < ArestasUsadas.size();i++){
        conjuntos.mergeSets(ArestasUsadas[i].v-1,ArestasUsadas[i].w-1);
    }

    int sz = arestas.size();
    int tamArvore = numVerticesGrafo - 1;
    int ctArestas = 0;
    for (int i = 0; i < sz; i++)
    {
        if (!conjuntos.isSameSet(arestas[i].v, arestas[i].w))
        {
            arestasUtilizadas[i] = true;
            ctArestas++;

            if (ctArestas == tamArvore)
                return ctArestas;

            conjuntos.mergeSets(arestas[i].v, arestas[i].w);
        }
    }
    return ctArestas;
}

double distancia(Vertice a, Vertice b)
{

    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


int main()
{

    int n;
    while (cin >> n)
    {
        int x, y;
        Vertice v;
        vector<Vertice> vertices;
        for (int i = 0; i < n; i++)
        {
            cin >> v.x >> v.y;
            vertices.push_back(v);
        }
        int c;
        cin >> c;
        vector<Edge> ArestasUsadas;
        Edge w;
        for (int i = 0; i < c; i++)
        {
            cin >> w.v >> w.w;
            w.peso= distancia(vertices[w.v],vertices[w.w]);
            ArestasUsadas.push_back(w);
        }
        vector<Edge> arestas;
        vector<bool> arestasUtilizadas;
        for (int i = 0; i < vertices.size() - 1; i++)
        {
            for (int j = i + 1; j < vertices.size(); j++)
            {
                Edge e(i, j, distancia(vertices[i], vertices[j]));
                arestas.push_back(e);
            }
        }
        Kruskal(arestas, arestasUtilizadas, vertices.size(),ArestasUsadas);
        double custoMinimo = 0;
        for (int i = 0; i < arestas.size(); i++)
        {
            if (arestasUtilizadas[i])
            {
                custoMinimo += arestas[i].peso;
            }
        }
        cout.precision(2);
        cout << fixed <<  custoMinimo << endl;
    }

    return 0;
}