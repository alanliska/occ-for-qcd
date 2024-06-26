#pragma once
#include <occ/core/linear_algebra.h>
// Generate Lebedev grids for sphere integral
// Input parameter:
//   nPoints : Number pf Lebedev grid points
// Output parameters:
//   Out      : Size nPoint-by-4, each row stores x/y/z coordinate and weight
//   <return> : Number of generated grids, should equal to nPoints, 0 means
//              input nPoint value is not supported
namespace occ::dft::grid {
Eigen::Matrix<double, Eigen::Dynamic, 4, Eigen::RowMajor>
lebedev(int num_points);

int nearest_grid_level_at_or_above(int num_points);
int nearest_grid_level_below(int num_points);

} // namespace occ::dft::grid
