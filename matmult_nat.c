void matmult_nat(int m, int n, int k, double **A, double **B, double **C) {
  int c, d, e;

  for (c = 0; c < m; c++) {
    for (d = 0; d < n; d++) {
      C[c][d] = 0;
      for (e = 0; e < k; e++) {
        C[c][d] += A[c][e] * B[e][d];
      }
    }
  }
}
