#include <iostream>
using namespace std;
int main()
{
    int age; // Input age from the user
cout << "Enter your age: ";
cin >> age;
if (age >= 18)  // Check voting eligibility
{
    cout << "You are eligible to vote.\n";
      if (age > 60) // Check if the person is a senior citizen
      cout << "You are a senior citizen eligible to vote.\n"; 
}
else
cout << "You are not eligible to vote.\n";
return 0;
}
