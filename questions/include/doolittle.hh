#pragma once

#include <tuple>
#include <vector>

namespace numeric {
using Real_type = double;
using Vector_type = std::vector<Real_type>;
using MatrixType = typename std::vector<Vector_type>;

std::tuple<MatrixType, MatrixType> doolittle(const MatrixType &);
} // namespace numeric
