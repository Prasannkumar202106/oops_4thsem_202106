// Program to make the use of inline function.

#include <iostream>
using namespace std;
class operation
{
	int first,second,add,sub,mul;
	float div;

public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};

inline void operation :: get()
{
	cout << "Enter the first value:";
	cin >> first;
	cout << "Enter the second value:";
	cin >> second;
}

inline void operation :: sum()
{
	add = first+second;
	cout << "Addition of two numbers: " << first+second << "\n";
}

inline void operation :: difference()
{
	sub = first-second;
	cout << "Difference of two numbers: " << first-second << "\n";
}

inline void operation :: product()
{
	mul = first*second;
	cout << "Product of two numbers: " << first*second << "\n";
}

inline void operation ::division()
{
	div=first/second;
	cout<<"Division of two numbers: "<<first/second<<"\n" ;
}

int main()
{
	cout << "Program using inline function\n";
	operation ash;
	ash.get();
	ash.sum();
	ash.difference();
	ash.product();
	ash.division();
	return 0;
}