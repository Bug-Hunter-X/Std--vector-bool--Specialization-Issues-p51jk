#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Instead of std::vector<bool>
  std::vector<char> vec; // or std::vector<int8_t> or std::bitset<N> vec;
  // ... operations on vec ...
  if (vec.empty()) {
    std::cout << "Vector is empty\n";
  } else {
    std::cout << "Vector is not empty\n";
  }
  return 0;
} 