#include <iostream>
#include <string>

int LCS(int i, int j, int n1, int n2, int T1[], int T2[])
{
  if(!T1[i] || !T2[j]) return 0;
  else if(T1[i] == T2[j]) return 1+LCS(i+1, j+1, n1, n2, T1, T2);
  else return std::max(LCS(i+1, j, n1, n2, T1, T2), LCS(i, j+1, n1, n2, T1, T2));
}

int main()
{

  int n1,n2;
  std::cin >> n1 >> n2;
  int T1[n1], T2[n2];
  for (int i = 0; i < n1; i ++) std::cin >> T1[i];
  for (int i = 0; i < n2; i ++) std::cin >> T2[i];

  // int i = 0, j = 0;
  // int res = 0;
  
  // while(T1[i] && T2[j])
  //   if(T1[i] == T2[j])
  //   {
  //     res++; i++; j++;
  //   }
  //   else if(LCS(i+1, j, n1, n2, T1, T2) <= LCS(i, j+1, n1, n2, T1, T2))
  //          j++;
  //        else
  //          i++;
  // std::cout << res;
  
    std::cout << LCS(0,0,n1,n2,T1,T2);

  return 0;
} 