#include <iostream>

int main(int argc, char const *argv[])
{
      int Z;
      std::cin >> Z;
      while (Z--)
      {
              short n, B;
              std::cin >> n >> B;
              short s[n];
              int v[n];
              for (int i = 0; i < n; i ++) std::cin >> s[i] >> v[i];

              int dp[B+1]={0};
              for (int i = 0; i < n; i ++)
              {
                      for (int j = B; j >= 0; j --)
                      {
                              if (j >= s[i]) dp[j] = std::max(dp[j], dp[j - s[i]]+v[i]);
                      }
              }
              std::cout << dp[B] << '\n';
      }
      return 0;
}
