#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
      int Z;
      std::cin >> Z;
      while (Z--)
      {
              int m,n;
              std::cin >> n >> m;
              std::vector<std::vector<int>> users(n);
              for (int i = 0; i < m; i++)
              {
                      int a,b;
                      std::cin >> a >> b;
                      users[a-1].push_back(b);
                      users[b-1].push_back(a);
              }
              for (int i = 0; i < n; i ++) std::cout << "Numer " << i+1 << " ma " << users[i].size() << " znajomych." << '\n';
      }
      return 0;
}
