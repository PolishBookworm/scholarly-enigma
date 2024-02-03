#include <iostream>

int main(int argc, char const *argv[])
{
      int Z;
      std::cin >> Z;
      while(Z--)
      {
              int n, k;
              std::string traps;
              std::cin >> n >> k >> traps;

              int dp[n] = {0};
              dp[0] = 1;

              for (int i = 1; i < n; i ++)
              {
                      if (traps[i] != '0')
                      {
                              for (int j = 1; j < 7 && j <= i; j ++)
                              {
                                      dp[i] += dp[i-j]%k;
                              }
                              dp[i] %= k;
                      }
              }
              std::cout << dp[n-1] << '\n';
      }

      return 0;
}
