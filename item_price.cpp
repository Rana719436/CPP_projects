#include <iostream>
using namespace std;
int main()
{
    int itemNum;
    cout << "Enter the item number (1 to 4): ";
    cin >> itemNum;
    if (itemNum == 1)
        cout << "Price: 100\n";
    else if (itemNum == 2)
        cout << "Price: 200\n";
    else if (itemNum == 3)
        cout << "Price: 300\n";
    else if (itemNum == 4)
        cout << "Price: 400\n";
    else
        cout << "Invalid item number. Please enter a number between 1 and 4.\n";                    
return 0;            
}
