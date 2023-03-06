#include <stdio.h>
#include <stdlib.h>

int* knapsackDP(int* w, int* v, int n, int wx) {
  int** dp = (int**)malloc((n + 1) * sizeof(int*));
  for (int i = 0; i <= n; i++) {
    dp[i] = (int*)malloc((wx + 1) * sizeof(int));
  }
  for (int i = 0; i <= n; i++) {
    dp[i][0] = 0;
  }
  for (int j = 0; j <= wx; j++) {
    dp[0][j] = 0;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= wx; j++) {
      if (w[i - 1] > j) {
        dp[i][j] = dp[i - 1][j];
      } else {
        int include = v[i - 1] + dp[i - 1][j - w[i - 1]];
        int exclude = dp[i - 1][j];
        dp[i][j] = (include > exclude) ? include : exclude;
      }
    }
  }
  int* x = (int*)malloc(n * sizeof(int));
  int j = wx;
  for (int i = n; i >= 1; i--) {
    if (dp[i][j] != dp[i - 1][j]) {
      x[i - 1] = 1;
      j -= w[i - 1];
    } else {
      x[i - 1] = 0;
    }
  }
  for (int i = 0; i <= n; i++) {
    free(dp[i]);
  }
  free(dp);
  return x;
}

int main() {
  int n = 5, wx = 11;
  int w[5] = {1, 2, 5, 6, 7};
  int v[5] = {1, 6, 18, 22, 28};
  int* x = knapsackDP(w, v, n, wx);
  printf("Solution: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", x[i]);
  }
  printf("\n"); 
  free(x);
  return 0;
}