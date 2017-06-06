#include "FileReader.h"

#include <iostream>
#include <fstream>
#include <string>

void FileReader::ReadFile(std::string fileName)
{
	//read from given file name
	std::ifstream file(fileName);

	//check file existed
	if (!file) {
		std::cout << "No file exists" << std::endl;
		int i;
		std::cin >> i;
		exit(0);
	}

	//while file not fully read
	while (file) {
		//read from file into tempoary string
		std::string tempString;
		std::getline(file, tempString);
		//add to whole file string
		wholeFile.append(tempString);
	}
}

bool FileReader::ConfirmFileName(std::string fileName)
{
	//bool for whether file is xml or csv
	bool fileLegit = false;

	//values to see if file is legit
	std::string xml = ".xml";
	std::string csv = ".csv";
	std::size_t findXML = fileName.find(xml);
	std::size_t findCSV = fileName.find(csv);

	//check if file is either .xml or .csv
	if (findXML != std::string::npos || findCSV != std::string::npos) {
		fileLegit = true;
	}

	//return
	return fileLegit;
}

void FileReader::ConvertXMLToCSV()
{
	//copy over whole file
	copyFile = wholeFile;
	//check file has xml header
	std::size_t checkHeader = copyFile.find("xml");
	//if can't find before end of whole string return out
	if (checkHeader == std::string::npos) {
		std::cout << "No xml header found" << std::endl;
		return;
	}
	//find the doctype
	std::size_t doctypeIndex = copyFile.find("DOCTYPE");
	//if doctype found, cut off everything up to the doctype and get doctype
	if (doctypeIndex != std::string::npos) {
		copyFile.erase(0, doctypeIndex + 7);
		//find next space, end of doctype
		std::size_t endOfDocTypeIndex = copyFile.find(" ");
		//substring the doctype
		docType = copyFile.substr(0, endOfDocTypeIndex - 1);
		////set found doctype to true
		//docTypeFound = true;

	}
	else {
		//return cant find doctype
		std::cout << "No doctype specified" << std::endl;
		return;
	}

}
