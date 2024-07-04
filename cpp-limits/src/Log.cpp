#include <iostream>

// <> - include directories
// "" - link
// <> for std, "" for other

#define nameof(v) #v

void Log(const char* message)
#include "StartBrace.h"
	std::cout << message << std::endl;
#include "EndBrace.h"

void Nameof() {
	Log(nameof(Log));
}
