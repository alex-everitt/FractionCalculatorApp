#pragma once
#ifdef COMPDLL_EXPORTS
#define COMPDLL __declspec(dllexport)
#else
#define COMPDLL __declspec(dllimport)
#endif

#include <iostream>
#include<string>

//#include <ostream>
using namespace std;
using std::string;



class Fraction
{
	//iostream functions overloads
	friend ostream& operator<<(ostream& output, Fraction& value);//Print fractions
	friend istream& operator >> (istream& input, Fraction& value);//read fractions


public:
	Fraction(); //default constructor
	COMPDLL Fraction(int num, int den); //constructor with both fields specified, reduces input to lowest terms before returning a fraction object
	COMPDLL Fraction(int num);//creates a num/1 fraction
	COMPDLL int numerator() const;//getter for numerator field
	COMPDLL int denominator() const;//getter for denominator field
	COMPDLL Fraction reduce();//reduces the calling fraction to lowest terms
	COMPDLL int gcd(int numeratorVal, int denominatorVal) const;//helper function calculates gcd of specified numerator and denominator

														//Unary operators
	COMPDLL Fraction operator- () const; //negation
	COMPDLL Fraction operator++(); //prefix increment
	COMPDLL Fraction operator++(int);//postfix increment

	COMPDLL Fraction operator= (const Fraction& fraction) const;//returns a new Fraction equal to argument function
	COMPDLL Fraction operator+ (const Fraction& fraction) const;//returns a new Fraction equal to sum of this and argument function
	COMPDLL Fraction operator- (const Fraction& fraction) const;//returns a new Fraction equal to difference of this and argument function
	COMPDLL Fraction operator*(const Fraction& fraction) const;//returns a new Fraction equal to product of this and argument function
	COMPDLL Fraction operator/(const Fraction& fraction) const;//returns a new Fraction equal to result of division of this and argument function

	COMPDLL Fraction operator+=(const Fraction& fraction);//returns a new Fraction equal to sum of this and argument function
	COMPDLL Fraction operator+=(const int number) const;//Returns new fracion equal to sum of this and argument int
	COMPDLL Fraction operator-=(const Fraction& fraction);//Returns new fracion equal to difference of this and argument int



												  //Friend operators functions for comparators and operations involving ints. 
	friend Fraction operator+(int x, Fraction &fraction);//Fraction addition with int
	friend Fraction operator-(int x, Fraction &fraction);//Fraction subtraction with int
	friend Fraction operator*(int x, Fraction &fraction);//Fraction multiplication with int
	friend bool operator==(const Fraction& lhs, const Fraction& rhs);//Equality operator
	friend bool operator!=(const Fraction& lhs, const Fraction& rhs);//Not equality operator
	friend bool operator<(const Fraction& lhs, const Fraction& rhs);//Less than operator
	friend bool operator<=(const Fraction& lhs, const Fraction& rhs);//Less than or equal to operator
	friend bool operator>(const Fraction& lhs, const Fraction& rhs);//Greater than operator
	friend bool operator>=(const Fraction& lhs, const Fraction& rhs);//Greater than or equal to operator

private:
	int numer;//Numerator of this
	int denom;//Denominator of this

};

//class to throw exceptions for invalid fractions
class FractionException
{
public:
	COMPDLL FractionException(const string&);//constructor
	COMPDLL string what() const;//Returns the error message

private:
	string message;//Contains the error message

};


