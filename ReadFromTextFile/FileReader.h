#pragma once

#include <fstream>

class CFileReader
{
private:
	std::ifstream m_File;
public:
	CFileReader(const std::string &path);
	virtual ~CFileReader();

	std::string ReadFile();
};

