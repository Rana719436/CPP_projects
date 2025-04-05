#include <iostream>
using namespace std;
int main()
{
    int itemNum;
    cout << "Enter the item number (1 to 4): ";
    cin >> itemNum;
    switch (itemNum) 
    {
    case 1:            
        cout << "Price: 100\n";
        break;
    case 2:
        cout << "Price: 200\n";
        break;
    case 3:              
        cout << "Price: 300\n";
        break;
    case 4:
        cout << "Price: 400\n";
        break;
    default: 
        cout << "Invalid item number. Please enter a number between 1 and 4.\n"; 
    }                   
return 0;            
}
