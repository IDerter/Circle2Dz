#include <iostream>
#include "Circle.h"
int main()
{
	Circle circle(15,"Blue");
	//float rad = 10;
	//circle.set_Rad(rad);
	std::cout <<"Radius: "<< circle.get_Rad() << "\n" <<"S: "<< circle.Calcul_Area() << "\n" << "P: " << circle.Calcul_Per();
	std::string color;
	std::cout <<"\n"<< "Color: ";
	//getline(std::cin, color);
	//circle.set_color(color);
	std::cout << circle.get_color();
	return 0;
}
