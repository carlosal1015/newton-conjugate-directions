#pragma once

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

namespace numeric {
using MatrixType = typename std::vector<std::vector<double>>;

void print(const MatrixType &, const std::string);

} // namespace numeric
