#include <iostream>
using namespace std;
#include <cmath> 

#include "Circle.h"

 //. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference. 

int main (){
	
	double radius;

	std::cout <<"Input radius: ";
	std::cin >> radius;
	
	Circle circle (radius);

	//getting area
	
	double area = circle.CalcArea();

	std::cout << "Area is: " << area << std::endl;


	//getting to circumference
	
	double circ = circle.calculateCircumference();
	std::cout << "Circumference is: " << circ << std::endl;

return 0;


}
