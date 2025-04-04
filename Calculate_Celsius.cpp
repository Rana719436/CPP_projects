#include <iostream>
using namespace std;
int main()
{
    int k,c;
    float f;
    cout << "Please Enter a Celsius Degree: ";
    cin >> c;
    k = c + 273;
    f = c * 5/9 + 32;
    cout << "Kelven: " << k << '\n';
    cout << "Fehrenhit: " << f << '\n';
    return 0;
}
