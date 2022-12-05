#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

vi dist;

struct Edge
{
    int v, w;
    double peso;
    Edge(int v = -1, int w = -1, double peso = 0) : v(v), w(w), peso(peso) {}
};

bool operator<(const Edge &i, const Edge &j)
{
    return i.peso < j.peso;
}

void Dijkstra(int s, vector<vii> &vertices, vi &pai)
{

    priority_queue<ii, vector<ii>, greater<ii>> pq;
    dist = vi(vertices.size() + 1, 10000000);

    pq.push(ii(0, s));
    dist[s] = 0;
    pai[s] = 0; 

    while (!pq.empty())
    {
        ii p = pq.top();
        int d = p.first;  
        int v = p.second; 
        pq.pop();
        
        if (d == dist[v])
        {
            for (auto it = vertices[v].begin(); it != vertices[v].end(); it++)
            {
                int u = (*it).first;
                int peso_v_u = (*it).second;
                
                if (dist[v] + peso_v_u < dist[u])
                {
                    dist[u] = dist[v] + peso_v_u;
                    pai[u] = v;
                    pq.push(ii(dist[u], u));
                }
            }
        }
    }
}

int main()
{


    return 0;
}