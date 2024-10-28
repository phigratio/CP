#include <iostream>
#include <cmath>

int count_lattice_points_within_radius(int r)
{
  // Calculate the area of the circle with radius r
  double area = M_PI * r * r;
  // Round the area to the nearest integer
  int lattice_points_inside = std::round(area);
  // Add 1 to include the origin point (0, 0)
  return lattice_points_inside + 1;
}

int main()
{
  int t;
  std::cin >> t; // Read the number of test cases

  // Iterate over each test case
  for (int i = 0; i < t; ++i)
  {
    int r;
    std::cin >> r; // Read the radius r for each test case
    // Output the count of lattice points within the specified range
    std::cout << count_lattice_points_within_radius(r) << std::endl;
  }

  return 0;
}
