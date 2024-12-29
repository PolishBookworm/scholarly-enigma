// #include <bits/stdc++.h>
#include <limits>
#include <iostream>
// #include <algorithm>
#include <cstring>

// const short minVal = std::numeric_limits<short>::min();

long long int MaxDotProduct(short A[], short B[], short m, short n);

int main()
{
	short m, n;
	std::cin >> m >> n;
	short A[m], B[n];

	for (short i = 0; i < m; i ++)
		std::cin >> A[i];
	for (short i = 0; i < n; i ++)
		std::cin >> B[i];

	std::cout << MaxDotProduct(A, B, m, n);
	return 0;
}

// long long int MaxDotProduct(short A[], short B[], short m, short n)
// {
// 	long long int dp[n+1][m+1];
// 	std::cout << minVal;
// 	// memset(dp, 0, sizeof(dp));
// 	// memset(dp, std::numeric_limits<short>::min(), sizeof(dp));
// 	memset(dp, minVal, sizeof(dp));

// 	for (int i = 0; i < n+1; i++) for (int j = 0; j < m+1; j++)
// 		dp[i][j] = minVal;

// 	for (int i=1; i<=n; i++)
// 		for (int j=i; j<=m; j++)
// 			dp[i][j] = std::max(std::max((dp[i-1][j-1] + (A[j-1]*B[i-1])), dp[i][j-1]),dp[i-1][j]);

// 	return dp[n][m] ;
// }

long long int MaxDotProduct(short A[], short B[], short m, short n)
{
	long long int dp[n][m];
	// std::cout << minVal;
	memset(dp, 0, sizeof(dp));
	// memset(dp, std::numeric_limits<short>::min(), sizeof(dp));
	// memset(dp, minVal, sizeof(dp));

	for (int i = 0; i < n; i ++)
		dp[i][0] = B[i];
	for (int i = 0; i < m; i ++)
		dp[0][i] = A[i];

	dp[0][0] = std::max(A[0],B[0]);

	// std::cout << ' ' << std::flush;

	// for (int i = 1; i < n; i++) for (int j = 1; j < m; j++)
	// 	dp[i][j] = minVal;
	// for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
		// std::cout << dp[i][j] << std::endl;


	for (int i = 1; i < n; i ++)
		// for (int j = 0; j < m; j ++)
		for (int j = i; j < m; j ++)
			dp[i][j] = std::max(std::max((dp[i-1][j-1] + (A[j-1]*B[i-1])), dp[i][j-1]),dp[i-1][j]);

	for (int i = 0; i < n; i ++) for (int j = i; j < m; j ++)
		std::cout << dp[i][j];

	return dp[n-1][m-1];
}
