#include "doolittle.hh"
#include "print.hh"
#include "product.hh"

using MatrixType = typename std::vector<std::vector<double>>;

int main()
{
  MatrixType A{{2.0, 1.0, 1.0, 0.0},
               {4.0, 3.0, 3.0, 1.0},
               {8.0, 7.0, 9.0, 5.0},
               {6.0, 7.0, 9.0, 8.0}};
  numeric::print(A, "Matrix A");

  auto LU = numeric::doolittle(A);
  MatrixType L = std::get<0>(LU);
  MatrixType U = std::get<1>(LU);

  numeric::print(L, "Matrix L");
  numeric::print(U, "Matrix U");
  numeric::print(numeric::product(L, U), "Matrix LU");

  return 0;
}
