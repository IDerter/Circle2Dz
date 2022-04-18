#include "Circle.h"
void Circle::set_Rad(float r)
{
	rad = r;

}
float Circle::get_Rad()
{
	return rad;
}
float Circle::Calcul_Area()
{
	return PI * pow(rad, 2);
}
float Circle::Calcul_Per()
{
	return 2* PI * rad;
}
void Circle::set_color(std::string c)
{
	color = c;

}
std::string Circle:: get_color()
{
	return color;
}
//const double PI = 3.141592653589793;