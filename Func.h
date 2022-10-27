#pragma once


struct Complex
{
	double real;
	double imag;
};

Complex* sum(Complex* Z_1, Complex* Z_2);
Complex* subtraction(Complex* Z_1, Complex* Z_2);
Complex* multiplication(Complex* Z_1, Complex* Z_2);
Complex* division(Complex* Z_1, Complex* Z_2);



