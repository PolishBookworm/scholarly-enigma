#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
      int Z;
      std::cin >> Z;
      while (Z--)
      {
              std::string A, B;
              std::cin >> A >> B;
              int a = A.length();
              int b = B.length();

              // ok

              int prev[a+1] = {0};
              int cur[a+1] = {0};

              for (int i = 1; i <= b; i ++)
              {
                      for (int j = 1; j <= a; j ++)
                      {
                              if (A[j-1] = B[i-1])
                              {
                                      cur[j] = prev[j-1] + 1;
                              } else
                              {
                                      cur[j] = std::max(prev[j], cur[j-1]);
                              }
                      }


                      for (int j = 0; j <= a; j ++) prev[j] = cur[j];
              }
              std::cout << cur[a] << '\n';
      }
      return 0;
}
