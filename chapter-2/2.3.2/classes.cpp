#include <iostream>

using namespace std;

class Vector {
public:
	Vector(int s): elem{new double[s]}, sz(s) 
	{}
	
	double& operator[](int i) { return elem[i];}
	int size() { return sz; }
	
private:
	double* elem;
	int sz;
};

double read_and_sum(int s)
{
	Vector v(s);
	
	for(auto i = 0; i != v.size(); ++i)
		cin >> v[i];
		
	double sum = 0;
	
	for(auto i = 0; i != v.size(); ++i)
		sum += v[i];
		
	return sum;
}

int main()
{
	auto how_many_numbers_to_sum = 1;
	
	cout << "How many number are you think to input: ";
	cin >> how_many_numbers_to_sum;
	
	cout << read_and_sum(how_many_numbers_to_sum);
	
	return 0;
}