#ifndef HUGEINTEGER_H_
#define HUGEINTEGER_H_
#include <iostream>
using namespace std;
// by using this namespace, we don't have to specify scope std:: when we use standard library functions like vector

class HugeInteger
{
private:
	// attribute for SIGN of HugeInteger (+1 or -1, we'll use multiplication)
	bool isNegative;
	// attribute for DATA of HugeInteger --> array of integers of variable length where we will add the digits
	// but we're gonna store it as a pointer to some memory location
	int *data;
	// length of array storing HugeInt (also length of string but not including potential negative)
	int length;

public:
	// default constructor
	HugeInteger();
	// other constructors
	// if we receive input string to convert to HugeInteger
	HugeInteger(const string& val);
	// if we want a random HugeInteger of length n
	HugeInteger(int n);

	// disallows copy constructor (can't assign one HUgeInt to another, makes sure we never delete memory twice, never have HUgeInts sharing same memory space)
	// can't give hugeinteger a value of a diff hugeint
	// making a new COPY CONSTRUCTOR
	HugeInteger(const HugeInteger& num);

	// methods
	HugeInteger add(const HugeInteger& h);
	HugeInteger subtract(const HugeInteger& h);
	HugeInteger multiply(const HugeInteger& h);
	int compareTo(const HugeInteger& h);
	std::string toString();

	// destructor... same name as class preceded with tilde
	~HugeInteger();
};

#endif /* HUGEINTEGER_H_ */
