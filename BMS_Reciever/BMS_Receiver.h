#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef struct
{
	string json_string;
	double SOC;
	double Temperrature;
}Parameters;

typedef enum
{
	CONSOLE,
	CONTROLLER
}SENDER;


class BMS_Receiver
{
	vector<Parameters> parameter_list;
	
	void get_data_from_console();
	bool parse_data(string data, Parameters &parameter);

public:
	void get_sender_data(SENDER sender);
};
