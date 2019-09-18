#ifndef CODE_SOLUTION_H
#define CODE_SOLUTION_H

#include <vector>

/**
 * Given a list of numbers and a number \p k, returns whether any 
 * two numbers from the list add up to \p k.
 * 
 * @param[in] listOfNumbers List of numbers.
 * @param[in] k             Number to test.
 * @return true if we found two numbers that add up to \p - false otherwise
 */
extern bool containsIntegersToAddUp(std::vector<int> listOfNumbers, const int k);

#endif