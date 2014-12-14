#include <iostream>

using namespace std;

bool accept1()
{
	cout << "Do you want to proceed (y or n)? \n";
	
	char answer = 0;
	cin >> answer;
	
	if(answer == 'y')
		return true;
	
	return false;
}

int main()
{
	auto answer = accept1();
	
	cout << "answer: " << answer;
}