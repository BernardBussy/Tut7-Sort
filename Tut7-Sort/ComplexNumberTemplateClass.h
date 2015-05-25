#include <iostream>
#include <math.h>
using namespace std;



template <typename T>
class ComplexNumberTemplateClass
{
public:
	ComplexNumberTemplateClass();										//Default Constructor
	ComplexNumberTemplateClass(ComplexNumberTemplateClass &copyObject); //Copy Constructor
	ComplexNumberTemplateClass(T real, T imaginary);					//Parameterised Constructor
	~ComplexNumberTemplateClass();										//Destructor

	//Get and Set Functions
	T magnitude();
	
	//Overload Binary Operators for New Type
	void operator=(ComplexNumberTemplateClass &RHS);
	ComplexNumberTemplateClass operator+(ComplexNumberTemplateClass &RHS);
	ComplexNumberTemplateClass operator-(ComplexNumberTemplateClass &RHS);
	//ComplexNumberTemplateClass operator*(ComplexNumberTemplateClass &RHS);
	//ComplexNumberTemplateClass operator/(ComplexNumberTemplateClass &RHS);

	//Logic Operators
	bool operator>(ComplexNumberTemplateClass &RHS);
	bool operator<(ComplexNumberTemplateClass &RHS);

	//Overload Stream Insertion Operators
	//Overload <<
	friend std::ostream& operator<<(std::ostream &output, ComplexNumberTemplateClass<T> &complexValue)
	{
		if (complexValue.imaginary >=0)
			output << complexValue.real << "+j" << complexValue.imaginary;
		else
			output << complexValue.real << "-j" << (-1*complexValue.imaginary);
		return output;
	};
private:
	T real, imaginary;

};

//Default Constructor
template <typename T>
ComplexNumberTemplateClass<T>::ComplexNumberTemplateClass()
{
	real = 0;
	imaginary = 0;
}
//Copy Constructor
template <typename T>
ComplexNumberTemplateClass<T>::ComplexNumberTemplateClass(ComplexNumberTemplateClass &copyValue)
{
	real = copyValue.real;
	imaginary = copyValue.imaginary;
}
//Parameterised Constructor
template <typename T>
ComplexNumberTemplateClass<T>::ComplexNumberTemplateClass(T real, T imaginary)
{
	this->imaginary = imaginary;
	this->real = real;
}

//Destructor
template <typename T>
ComplexNumberTemplateClass<T>::~ComplexNumberTemplateClass()
{
}

//Get and Set Functions
template <typename T>
T ComplexNumberTemplateClass<T>::magnitude()
{
	return (T)(sqrt(real*real + imaginary*imaginary));
}

//Overloaded Operators
//Overload Equals
template <typename T>
void ComplexNumberTemplateClass<T>::operator=(ComplexNumberTemplateClass &RHS)
{
	this->real = RHS.real;
	this->imaginary = RHS.imaginary;
}
//Overload Plus
template <typename T>
ComplexNumberTemplateClass<T> ComplexNumberTemplateClass<T>::operator+(ComplexNumberTemplateClass &RHS)
{
	ComplexNumberTemplateClass<T> result;
	result.real = this->real + RHS.real;
	result.imaginary = this->imaginary + RHS.imaginary;
	return result;
}
//Logic Operators
//Overload >
template <typename T>
bool ComplexNumberTemplateClass<T>::operator>(ComplexNumberTemplateClass &RHS)
{
	return ((this->magnitude()) > (RHS.magnitude()));
}
//Overload <
template <typename T>
bool ComplexNumberTemplateClass<T>::operator<(ComplexNumberTemplateClass &RHS)
{
	return ((this->magnitude()) < (RHS.magnitude()));
}
