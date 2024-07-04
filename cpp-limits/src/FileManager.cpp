#include "FileManager.h"

std::optional<std::string> ReadFileAsString(const std::string& filePath)
{
	std::ifstream stream(filePath);
	if (stream) {
		std::string result;
		stream.close();
		return result;
	}

	return {};
}
