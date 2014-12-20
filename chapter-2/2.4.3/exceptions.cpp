#include <iostream>
#include <stdexcept>

using namespace std;

class Vector {
public:
	Vector(int s)
	{
		if(s < 0) 
			throw length_error("Negative length");
		
		elem = new double[s];
		sz = s;
	}
	
	double& operator[](int i)
	{ 
		if(i <0 || size() <= i)
			throw out_of_range("Vector::operator[]");
		return elem[i];
	}
	
	int size() { return sz; }
	
private:
	double* elem;
	int sz;
};

void try_block_example(Vector& v)
{
	try{
		v[v.size()] = 5;
	}
	catch(out_of_range) {
		cout << "out of range has been taken";
	}
}

int main()
{
	try{
		Vector v(-3);
		try_block_example(v);
	}
	catch(std::length_error) {
		cout << "length error has been taken";
	}
	catch(std::bad_alloc){
		cout << "bad alloc has been taken";
	}
	
	
	return 0;
}