#include <iostream>
//#include <Windows.h>
#include <string>
//#include <sstream>
using namespace std;

void main()
{
	std::string str;
	string sender_data[10];
	int i = 0;
	while (i < 5)
	{
		std::getline(std::cin, sender_data[i++]);
		//if (str == "")
		//	break;
		//str = "received string is " + str;
	}

	for (int i = 0; i < 5;i++)
	{
		cout << sender_data[i];
	}

}