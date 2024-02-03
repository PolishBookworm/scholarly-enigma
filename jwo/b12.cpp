#include <iostream>
#include <vector>
#include <queue>

int main(int argc, char const *argv[])
{
      int Z;
      std::cin >> Z;
      while (Z--)
      {
              int m,n,usrNum;
              std::cin >> n >> m;
              std::vector<std::vector<int>> G(n);
              for (int i = 0; i < m; i++)
              {
                      int a,b;
                      std::cin >> a >> b;
                      G[a-1].push_back(b);
                      G[b-1].push_back(a);
              }
              std::cin >> usrNum;

              usrNum--;

              std::vector<int> dist(n,-1);
              std::queue<int> Q;
              Q.push(usrNum);
              dist[usrNum] = 0;

              while(Q.size())
              {
                      int v = Q.front();
                      Q.pop();
                      for (int i = 0; i < G[v].size(); i++)
                      {
                              int U = G[v][i];
                              if (dist[U] == -1 || dist[v] + 1 < dist[U])
                              {
                                      dist[U] = dist[v] + 1;
                                      Q.push(U);
                              }
                      }
              }

              std::cout << "Znajomi numeru " << usrNum+1 << ": \n";

              for (int i = 0; i < n; i ++)
              {
                      // if (dist[i] > 0)
                      {
                              std::cout << i+1 << ": " << dist[i] << '\n';
                      }
              }


      }
      return 0;
}

// for 2nd part repeat searching for -1 v

// bfs
//komisja sledcza dfs, state, kolejnosc topologiczna - stack
//lub prosciej "obgryzanie" grafu
