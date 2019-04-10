#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>

class Logger
{
public:
	static void log(std::string message, std::ostream& output);

private:

};