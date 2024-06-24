#pragma once

#include <cassert>
#include <vector>

namespace numeric {
using Real_type = double;
using Vector_type = std::vector<Real_type>;
using MatrixType = typename std::vector<Vector_type>;

MatrixType product(const MatrixType &, const MatrixType &);

} // namespace numeric
