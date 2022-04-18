#pragma once
#ifndef Circle_H
#define Circle_H
#include <iostream>
#include <string>
class Circle
{
public:
	void set_Rad(float r);
	float get_Rad();
	float Calcul_Area();
	float Calcul_Per();
	void set_color(std::string);
	std::string get_color();
	const double PI = 3.141592653589793;
	Circle(float valuerad,std::string valuecolor)
	{
		rad = valuerad;
		color = valuecolor;
	}
	~Circle()
	{
		std::cout << std::endl<< "Destructor";
	}
private:
	float rad;
	std::string color;
};








#endif