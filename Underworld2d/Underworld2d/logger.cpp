#include "logger.h"

void Logger::log(std::string message, std::ostream & output)
{
	auto time = std::chrono::system_clock::now();
	std::time_t t = std::chrono::system_clock::to_time_t(time);
	std::time_t now = std::time(NULL);
	output << std::put_time(std::localtime(&now), "%F %T") << ": " << message << std::endl;
}
