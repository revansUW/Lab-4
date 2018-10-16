/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Ryan Evans
 * Date: October 14, 2018
 * Additions: functions to add numbers to vectors, print the even 'i' values of
 *		those vectors, detect if a given value is present, and sort vectors
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// add 10 random numbers from 1-100 to the vector
void add_numbers(vector<short> &data)
{
	for (int i = 0; i < 10; i++) 
	{
		short n = rand() % 100 + 1; // random values 1-100
		data.push_back(n); // add the value to vector
	}
}

// print the value at 'i' if 'i' is even
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			if ((i % 2) == 0) // if i % 2 is 0 then i is even
			{
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}

// iterates through vector to check if a given value is present
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator
	iter = data.begin();
	while (iter != data.end()) {
		if (*iter == value) // compares current iterator value to given value
		{
			return true; // when value is found
		}
		iter++;
	}
	return false; // if no value is found
}

// sorts vectors using the std::sort routine
void sort_vector(vector<short> &data)
{
	std::sort(data.begin(), data.end());
}