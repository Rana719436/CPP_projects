#include <iostream>
using namespace std;

int main()
{
float r;
float surface_area,volume;
const float PI = 3.14; 
cout << "Enter radius of the sphere: ";
cin >> r; 
surface_area = 4* PI * r * r;
volume = (4.0/3) * PI * r * r * r;
cout<<"Surface area of sphere is:"<<surface_area;
cout<<"\nVolume of sphere is : "<<volume;
return 0;
}
