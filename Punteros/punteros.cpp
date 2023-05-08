#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string name = "Carlos";
  string* ptr = &food;  // A pointer variable that stores the address of food
  string* ptr2 = &name;

  // Output the value of food
  cout << food << " " << name << "\n";

  // Output the memory address of food
  cout << &food << " " << &name << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << " " << ptr2 << "\n";
  cout << *ptr << " " << *ptr2 << endl;
  cout << &ptr << " " << &ptr2 << endl;
  return 0;
}
