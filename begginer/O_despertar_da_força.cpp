#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    int a[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            cin>>a[i][j];
    }
    int x =0,y =0;
    bool w = false;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(a[i][j]==42)
            {
                if(i==0 or i==N-1 or j==0 or j==M-1)
                {
                    
                    continue;
                }
                else
                {
                    if(a[i-1][j-1]==7&&a[i-1][j]==7&&a[i-1][j+1]==7&&a[i][j-1]==7&&a[i][j+1]==7&&a[i+1][j-1]==7&&a[i+1][j]==7&&a[i+1][j+1]==7)
                    {
                        x = i+1;
                        y = j+1;
                    }
                }

            }
        }
    }
    cout<< x <<" "<< y <<endl;
    return 0;
}
