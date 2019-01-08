// FractionCalculator15aje.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
//#include "FractionCalculator15aje.h"

//greatest common devisor function
int Fraction::gcd(const int x, const int y) const
{
	if (x == 0 || y == 0) return 1;
	const int z = abs(x);
	if ((y <= z) && (z % y == 0))
	{
		return y;
	}
	else if (z < y)
	{
		return gcd(y, z);
	}
	else
	{
		return gcd(y, z % y);
	}
}

Fraction Fraction::reduce()
{
	//divide numbers by greatest common divisor to find lowest terms representation
	const int gcdom = gcd(this->numer, this->denom);

	//divide numerator and denominator of claling object by gcd
	this->numer = this->numer / gcdom;
	this->denom = this->denom / gcdom;
	return *this;
}


//Constructors
Fraction::Fraction()//default 0/1 constructor
{
	denom = 1;
	numer = 0;
}
Fraction::Fraction(const int num)//arg num/1 constructor
{
	numer = num;
	denom = 1;
}
Fraction::Fraction(int num, int den)//Fraction specified in lowest terms constructor
{
	//catch invalid values
	if (den == 0) throw FractionException("Invalid denominator");

	else if (num < 0 && den < 0) {
		den = den *(-1);
		num = num *(-1);
		this->numer = num;
		this->denom = den;
	}
	else if (den < 0)
	{
		den = den*(-1);
		num = num*(-1);
		this->numer = num;
		this->denom = den;
	}
	else
	{
		this->numer = num;
		this->denom = den;
	}
	this->reduce();//reduce to lowest terms
}

//Getters
int Fraction::numerator() const
{
	return this->numer;
}//return numerator
int Fraction::denominator() const
{
	return this->denom;
}//return denominator

 //Override operators
Fraction Fraction::operator=(const Fraction& fraction) const
{
	return Fraction(fraction.numerator(), fraction.denominator());
}//sets left side equal to right side

Fraction Fraction::operator+(const Fraction& fraction) const
{

	Fraction output(numerator() * fraction.denominator() + (fraction.numerator() * denominator()), denominator()*fraction.denominator());
	return output;
}//returns object equal to sum of int and fraction


Fraction operator+(const int x, Fraction& fraction)
{
	const int number = fraction.denominator() * (x);
	return Fraction(number + fraction.numer, fraction.denominator());
}//returns object equal to sum of fraction and int

Fraction operator-(const int x, Fraction& fraction)
{
	return Fraction((fraction.denominator() * x) - fraction.numerator(), fraction.denominator());

}//returns object equal to difference of int and fraction

Fraction Fraction::operator-(const Fraction& fraction) const
{

	return Fraction(this->numer * fraction.denominator() - (fraction.numerator() * this->denom), this->denominator()*fraction.denominator());
}//returns object equal to difference of fraction and fraction

Fraction Fraction::operator*(const Fraction& fraction) const
{
	return Fraction(this->numer * fraction.numerator(), this->denom*fraction.denominator());
}//returns object equal to product of fraction and fraction

Fraction operator*(int x, Fraction& fraction)
{
	int number = fraction.denominator();
	number = number * (x);
	fraction.numer = fraction.numerator() + number;
	fraction.reduce();
	return fraction;
}//returns object equal to product of int and fraction

bool operator==(const Fraction& lhs, const Fraction& rhs)
{
	if (lhs.numer == rhs.numer && lhs.denom == rhs.denom)
	{
		return true;
	}
	else
	{
		return false;
	}
}//returns boolean true if calling objects are equal

bool operator<(const Fraction& lhs, const Fraction& rhs)
{
	const float lhs_ratio = float(lhs.numerator()) / float(lhs.denominator());
	const float rhs_ratio = float(rhs.numerator()) / float(rhs.denominator());
	return (rhs_ratio >  lhs_ratio);
}//returns boolean true if lhs < rhs

bool operator<=(const Fraction& lhs, const Fraction& rhs)
{
	const float lhs_ratio = float(lhs.numerator()) / float(lhs.denominator());
	const float rhs_ratio = float(rhs.numerator()) / float(rhs.denominator());
	return (rhs_ratio >= lhs_ratio);
}//returns boolean true if lhs <= rhs

bool operator>(const Fraction& lhs, const Fraction& rhs)
{
	const float lhs_ratio = float(lhs.numerator()) / float(lhs.denominator());
	const float rhs_ratio = float(rhs.numerator()) / float(rhs.denominator());

	return (rhs_ratio <  lhs_ratio);

}//returns boolean true if lhs > rhs

bool operator>=(const Fraction& lhs, const Fraction& rhs)
{
	const float lhs_ratio = float(lhs.numerator()) / float(lhs.denominator());
	const float rhs_ratio = float(rhs.numerator()) / float(rhs.denominator());

	return (rhs_ratio <= lhs_ratio);
}//returns boolean true if lhs >= rhs

bool operator!=(const Fraction& lhs, const Fraction& rhs)
{
	return !(lhs == rhs);
}//returns boolean true if lhs != rhs


Fraction Fraction::operator/(const Fraction& fraction) const
{
	return Fraction(this->numer*fraction.denominator(), this->denom*fraction.numerator());

}//Returns dividend of two fractions

Fraction Fraction::operator+=(const Fraction& fraction)
{
	this->numer = this->numer *fraction.denominator() + this->denom*fraction.numerator();
	this->denom = this->denom*fraction.denom;
	this->reduce();//reduce this to lowest terms

	return Fraction(this->numer, this->denom);
}//Increments calling object by a fraction and returns objec equal to it

Fraction Fraction::operator+=(const int number) const
{
	return Fraction(this->numerator() + this->denominator()*number, this->denominator());
}//Increments calling object and returns objec equal to it


Fraction Fraction::operator-=(const Fraction& fraction)
{
	this->numer = this->numer *fraction.denominator() - this->denom*fraction.numerator();
	this->denom = this->denom*fraction.denom;

	return Fraction(this->numer, this->denom);
}//decrements calling object by fraction and returns objec equal to it

 //Negate this
Fraction Fraction::operator-() const
{
	return Fraction(-this->numerator(), this->denominator());

}


//prefix this + 1/1
Fraction Fraction::operator++()
{
	//done
	this->numer = this->numer + this->denom;

	return Fraction(this->numer, this->denom);
}

//postfix *this + 1/1
Fraction Fraction::operator++(int)
{
	Fraction output(this->numer, this->denom);
	this->numer = this->numer + this->denom;

	return output;
}

//iostream function overloads
std::ostream& operator<<(std::ostream& output, Fraction& value)
{
	return output
		<< value.numerator() << "/"
		<< value.denominator();
}//Stream desired output

istream& operator>>(istream& input, Fraction& value)
{
	string toWrite;
	string numString, denString;//After towrite string is split it will be written into these
	int newNum, newDen;//values that will be written to the target fraction
	input >> toWrite;//stream user input to a placeholder string

					 //iterate over entire input string looking for / character
	for (int i = 0; i < toWrite.length(); i++) {
		if (toWrite[i] == '/')
		{
			//Write values on either side of the / to numstring and denstring
			numString.append(toWrite.substr(0, i));
			denString.append(toWrite.substr(i + 1, toWrite.length() - 1));

			//Take integer values within the strings and store in newNum and newDen
			newNum = atoi(numString.c_str());
			newDen = atoi(denString.c_str());

			//Change the output fraction according to the input read
			if (newNum == 0)
			{
				value.numer = 0;
				value.denom = 1;
			}
			else if (newDen == 0)
			{
				//catch invalid fractions
				throw (FractionException("Invalid denominator"));
			}
			else {
				value.numer = atoi(numString.c_str());
				value.denom = atoi(denString.c_str());
			}
		}
	}
	return input;//return input stream
}

//Exception Class
FractionException::FractionException(const string& m) : message(m) {

}

string FractionException::what() const {
	return message;
}





