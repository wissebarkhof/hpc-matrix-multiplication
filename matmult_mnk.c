
void matmult_mnk(int m, int n, int k, double **A, double **B, double **C) {
  int c, d, e;

  for (d = 0; d < n; d++) {
        for (c = 0; c < m; c++) {
          C[c][d] = 0;
        }
      }


  for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
          for (e = 0; e < k; e++) {
            C[c][d] += A[c][e]*B[e][d];
          }
        }
      }
}
