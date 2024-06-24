#include "product.hh"

namespace numeric {
MatrixType product(const MatrixType &A, const MatrixType &B)
{
  assert(A.size() == B.size()); // Matrices A and B are square
  const int n = A.size();
  MatrixType C(n, Vector_type(n, 0));

  for (std::size_t i = 0; i < n; i++)
    for (std::size_t j = 0; j < n; j++)
      for (std::size_t k = 0; k < n; k++)
        C[i][j] += A[i][k] * B[k][j];

  return C;
}
} // namespace numeric
