#include "Func.h"


Complex* sum(Complex* Z_1, Complex* Z_2)
{
	Complex* res = new Complex;

	res->real = Z_1->real + Z_2->real;
	res->imag = Z_1->imag + Z_2->imag;

	return res;
}

Complex* subtraction(Complex* Z_1, Complex* Z_2)
{
	Complex* res = new Complex;

	res->real = Z_1->real - Z_2->real;
	res->imag = Z_1->imag - Z_2->imag;

	return res;
}

Complex* multiplication(Complex* Z_1, Complex* Z_2)
{
	Complex* res = new Complex;

	res->real = Z_1->real * Z_2->real - Z_1->imag * Z_2->imag;
	res->imag = Z_1->real * Z_2->imag + Z_1->imag * Z_2->real;

	return res;
}

Complex* division(Complex* Z_1, Complex* Z_2)
{
	Complex* res = new Complex;

	res->real = ((Z_1->real * Z_2->real) + (Z_1->imag * Z_2->imag)) / ((Z_2->real * Z_2->real) + (Z_2->imag * Z_2->imag));
	res->imag = ((Z_1->imag * Z_2->real) - (Z_1->real * Z_2->imag)) / ((Z_2->real * Z_2->real) + (Z_2->imag * Z_2->imag));

	return res;
}
