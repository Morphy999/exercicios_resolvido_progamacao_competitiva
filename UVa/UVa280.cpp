#include<cstdio>
#include<vector>
#include<queue>
#include <iostream>
using namespace std;

auto listAdj = vector<vector<int>>(101, vector<int>(0));
bool visitou[100];
 int n;

void dfsqueue(int u)
{
    fill(visitou,visitou+n,false);
   
    queue<int> fila;
    fila.push(u);

    while (!fila.empty())
    {
        int vertice = fila.front();
        fila.pop();
        for (int i = 0; i < listAdj[vertice].size(); i++)
        {
            if (visitou[listAdj[vertice][i]])
                continue;
            visitou[listAdj[vertice][i]] = true;
            fila.push(listAdj[vertice][i]);
        }
    }
      int cont =0;
       for(int i = 0;i < n;i++) if(!visitou[i]) cont++;
       cout << cont << " ";
       for(int i = 0;i < n;i++) if(!visitou[i]) cout << i+1 << " ";
       cout << endl;

}

int main()
{
   int x, e, m, a;
    while (1)
    {
        scanf("%d",&n);
        if (n == 0)
            break;

        listAdj.clear();

        while (1)
        {
            scanf("%d",&x);
            if (x == 0)
                break;
            while (1)
            {
                scanf("%d",&e);
                if (e == 0)
                    break;

                listAdj[x - 1].push_back(e - 1);
            }
        }

        scanf("%d",&m);

        for (int i = 0; i < m; i++)
        {
            scanf("%d",&a);
            dfsqueue(a - 1);
        }
    }

    return 0;
}