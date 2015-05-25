#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()			//Default Constructor
{
	real = 0;
	imaginary = 0;
}
ComplexNumber::ComplexNumber(ComplexNumber &copyValue)	//Copy Constructor
{
	real = copyValue.real;
	imaginary = copyValue.imaginary;

}
ComplexNumber::ComplexNumber(int real, int imaginary)		//Parameterised Constructor
{
	this->real = real;
	this->imaginary = imaginary;
}

ComplexNumber::~ComplexNumber()
{
}
