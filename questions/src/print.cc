#include "print.hh"

namespace numeric {
void print(const MatrixType &A, const std::string title)
{
  std::cout << title << "\n";

  for (auto row = A.begin(); row != A.end(); row++) {
    for (auto col = row->begin(); col != row->end(); col++)
      std::cout << std::fixed << *col << " ";

    std::cout << "\n";
  }
  std::cout << "\n";
}
} // namespace numeric
