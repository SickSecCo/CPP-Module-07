#include "template.hpp"

int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "INT" << std::endl;
	std::cout << "Before Swap: " << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After Swap: " << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "STRING" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Before Swap: " << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After Swap: " << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "FLOAT" << std::endl;
	float a2 = 2.35;
	float b2 = 3.61;
	std::cout << "Before Swap: " << "a2 = " << a2 << ", b2 = " << b2 << std::endl;
	::swap(a2, b2);
	std::cout << "After Swap: " << "a = " << a2 << ", b = " << b2 << std::endl;
	std::cout << "min( a, b ) = " << ::min( a2, b2 ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a2, b2 ) << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "DOUBLE" << std::endl;
	double a3 = 4.55;
	double b3 = 3.91;
	std::cout << "Before Swap: " << "a3 = " << a3 << ", b3 = " << b3 << std::endl;
	::swap(a3, b3);
	std::cout << "After Swap: " << "a = " << a3 << ", b = " << b3 << std::endl;
	std::cout << "min( a, b ) = " << ::min( a3, b3 ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a3, b3 ) << std::endl;

	return 0;
}
