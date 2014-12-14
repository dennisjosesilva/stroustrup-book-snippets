#include <iostream>
#include <string>

using namespace std;

enum class Traffic_light { green, yellow, red };

Traffic_light& operator++(Traffic_light& t)
{
	switch(t)
	{
		case Traffic_light::green:	return t = Traffic_light::yellow;
		case Traffic_light::yellow: return t = Traffic_light::red;
		case Traffic_light::red:	return t = Traffic_light::green;
	}
}

const char* to_str(Traffic_light& t)
{
	switch(t)
	{
		case Traffic_light::green:	return "green";
		case Traffic_light::yellow: return "yellow";
		case Traffic_light::red:	return "red";
	}
}

int main()
{
	auto traffic_light = Traffic_light::red;
	
	cout << to_str(traffic_light) << endl;
	++traffic_light;
	cout << to_str(traffic_light) << endl;
	++traffic_light;
	cout << to_str(traffic_light) << endl;
	
	return 0;
}