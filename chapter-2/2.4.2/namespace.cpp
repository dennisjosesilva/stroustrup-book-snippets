#include <iostream>
#include <cmath>

namespace MyCode {
	class complex {
	public:
		complex(double real, double imag):r{real}, i{imag}
		{}
		
		double real() { return r; }
		double imag() { return i; }
	private:
		double r;
		double i;
	};
	
	complex sqrt(complex n)
	{
		auto real = n.real();
		auto imag = n.imag();
		
		auto ret_real = ::sqrt(::sqrt(real + ::sqrt((real*real) + (imag*imag))) / 2.0);
		auto ret_imag = ::sqrt(::sqrt(real - ::sqrt((real*real) + (imag*imag))) / 2.0);
		
		return complex(ret_real, ret_imag);
	}

	int main();
}



int MyCode::main()
{
	complex z{1, 2};
	auto z2 = MyCode::sqrt(z);
	std::cout << "{" << z2.real() << ", " << z2.imag() << "}\n"; 
	
	return 0;
}

int main()
{
	return MyCode::main();
}