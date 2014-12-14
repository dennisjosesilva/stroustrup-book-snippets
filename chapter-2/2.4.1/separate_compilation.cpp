#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

double sqrt_sum(Vector& v)
{
	double sum = 0;
	for(auto i = 0; i != v.size(); i++)
		sum += sqrt(v[i]);
	
	return sum;
}

double read_and_sqrt_sum(int s)
{
	Vector v(s);
	
	for(auto i = 0; i != v.size(); ++i)
		cin >> v[i];
			
	return sqrt_sum(v);
}

int main()
{
	auto how_many_numbers_to_sum = 1;
	
	cout << "How many number are you think to input: ";
	cin >> how_many_numbers_to_sum;
	
	cout << read_and_sqrt_sum(how_many_numbers_to_sum);
	
	return 0;
}