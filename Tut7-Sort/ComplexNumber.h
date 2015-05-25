#pragma once
class ComplexNumber
{
public:
	ComplexNumber();							//Default Constructor
	ComplexNumber(ComplexNumber &copyValue);	//Copy Constructor
	ComplexNumber(int real, int imaginary);		//Parameterised Constructor

	~ComplexNumber();
private:
	int real, imaginary;
};

