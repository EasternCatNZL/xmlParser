#pragma once
#ifndef FileReader_h
#define FileReader_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class FileReader {
public:
	void ReadFile(std::string fileName);
	bool ConfirmFileName(std::string fileName);
	void ConvertXMLToCSV();

private:
	//bool checks to see if found parts of file
	bool docTypeFound;
	bool elementsFound;
	bool allElementsFound;

	std::string wholeFile;
	std::string copyFile;
	std::string docType;
	std::vector<std::string> headingsVector;
	std::vector<std::string> gameTitleVector;
	std::vector<std::string> genreVector;
	std::vector<std::string> platformVector;
	std::vector<std::string> yearVector;
	std::vector<std::string> developerVector;
};


#endif // !FileReader_h
