// edited by Ryan Evans
// October 14, 2018
// test the functions of VectorDriver.h

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);

  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  print_even(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  vector<short> vector1{ 10, 4, 40, 32, 1 }; // vector with 5 numbers in random order
  cout << endl;
  print(vector1);
  cout << endl;
  cout << "vector with only even 'i' values: ";
  print_even(vector1); // only even i values will be output
  cout << endl;
  sort_vector(vector1);
  cout << "sorted vector: "; // sort_vector will arrange these from lowest to highest value
  print(vector1);
  cout << endl;
  if (is_present(vector1, 10)) // if the given value is present, the function will return true
  {
	  cout << "the value 10 is present in the vector";
	  cout << endl;
  }
  else
  {
	  cout << "the value 10 is not present in the vector";
	  cout << endl;
  }


  vector<short> vector2 (0); // creates an empty vector
  cout << endl;
  print_even(vector2); // to verify vector is empty
  add_numbers(vector2); // add 10 additional random numbers from 1-100 to the vector
  cout << endl;
  print(vector2);
  cout << endl;
  cout << "vector with only even 'i' values: ";
  print_even(vector2);
  cout << endl;
  sort_vector(vector2);
  cout << "sorted vector: ";
  print(vector2);
  cout << endl;
  if (is_present(vector2, 10))
  {
	  cout << "the value 10 is present in the vector";
	  cout << endl;
  }
  else
  {
	  cout << "the value 10 is not present in the vector";
	  cout << endl;
  }

  system("pause");
  return 0;
}
