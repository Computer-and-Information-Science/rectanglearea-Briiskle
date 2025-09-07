#include <iostream>
using namespace std;

int main() {
//Define//
  const double length = 7.2;
  const double width = 1.3;
//Calculate Perimeter//
  double perimeter = 2 * length + 2 * width;
//Calculate Area//
  double area = length * width;
//Print!//
  cout<< "Rectangle Properties: \nLength: " <<length<<'.';
  cout<< "\nWidth: " <<width<<'.';
  cout<< "\nArea: " <<area<<'.';
  cout<< "\nPerimeter: " <<perimeter<<'.'<<endl;


}