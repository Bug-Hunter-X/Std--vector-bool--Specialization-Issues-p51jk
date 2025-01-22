# std::vector<bool> Gotcha in C++
This repository demonstrates a potential issue with using `std::vector<bool>` in C++. The specialization of this template class can lead to subtle and unexpected behavior, particularly when checking for emptiness.

The `bug.cpp` file contains code that illustrates this problem. The `bugSolution.cpp` file provides a solution.

## Problem
The standard `std::vector<bool>` is not a vector of booleans in the traditional sense.  It's optimized for space, but this optimization can lead to different behavior than what is typically expected from a standard vector.

## Solution
The preferred approach is to avoid using `std::vector<bool>` entirely and instead utilize a `std::vector<char>` (or `std::vector<int8_t>`) or even `std::bitset` for more efficient boolean storage and operations.