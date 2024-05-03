#include <iostream>
#include <string>
#include <cmath>
const double PI = 3.14159;
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{

        private:

                double radius;

        public:
          
                Circle (double rad):radius (rad) {}
		
		double CalcArea();

		double calculateCircumference();
};
#endif
