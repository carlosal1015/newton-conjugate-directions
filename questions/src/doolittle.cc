#include "doolittle.hh"

/* General LU-factorization
 * p. 154 Numerical Analysis, David Кincaid and Ward Cheney
 */

namespace numeric {
std::tuple<MatrixType, MatrixType> doolittle(const MatrixType &A)
{
  const int n = A.size();
  MatrixType L(n, Vector_type(n, 0)); // Zero matrix
  MatrixType U(n, Vector_type(n, 0)); // Zero matrix

  for (std::size_t k = 0; k < n; k++) {
    L[k][k] = 1; // Identity matrix
    for (std::size_t j = k; j < n; j++) {
      Real_type sum = 0;
      for (std::size_t s = 0; s < k; s++)
        sum += L[k][s] * U[s][j];

      U[k][j] = A[k][j] - sum;
    }

    for (std::size_t j = k + 1; j < n; j++) {
      Real_type sum = 0;
      for (std::size_t s = 0; s < k; s++)
        sum += L[j][s] * U[s][k];

      L[j][k] = (A[j][k] - sum) / U[k][k];
    }
  }

  return std::make_tuple(L, U);
}
} // namespace numeric
