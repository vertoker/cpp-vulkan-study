#include <iostream>

#define nameof(v) #v

void Log(const char* message)
#include "StartBrace.h"
	std::cout << message << std::endl;
#include "EndBrace.h"

void Nameof() {
	Log(nameof(Log));
}
