

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

void matmult_blk(int m, int n, int k, double **A, double **B, double **C,
                 int bs) {
  int i1, i2, j1, j2, e;

  for (i1 = 0; i1 < m; i1 += bs) {
    for (j1 = 0; j1 < n; j1 += bs) {
      for (i2 = 0; i2 < MIN(m - i1, bs); i2++) {
        for (j2 = 0; j2 < MIN(n - j1, bs); j2++) {
          C[i1 + i2][j1 + j2] = 0;
          for (e = 0; e < k; e++) {
            C[i1 + i2][j1 + j2] += A[i1 + i2][e] * B[e][j1 + j2];
          }
        }
      }
    }
  }
}

void matmult_blk(int m, int n, int k, double **A, double **B, double **C,
                  int bs) {
  int i1, i2, j1, j2, e;
  printf("Using blk2\n");

  for (i1 = 0; i1 < m; i1 += bs) {
    for (j1 = 0; j1 < n; j1 += bs) {
      for (i2 = 0; i2 < MIN(m - i1, bs); i2++) {
        for (j2 = 0; j2 < MIN(n - j1, bs); j2++) {
          C[i1 + i2][j1 + j2] = 0;
          for (e = 0; e < k; e++) {
            C[i1 + i2][j1 + j2] += A[i1 + i2][e] * B[e][j1 + j2];
          }
        }
      }
    }
  }
}
