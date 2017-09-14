#include "stdafx.h"
#include "FileReader.h"

CFileReader::CFileReader(const std::string &path)
{
	m_File.open(path, std::ifstream::in);
	
	if (!m_File.is_open())
		throw std::exception("Can't open file");
}

CFileReader::~CFileReader()
{
	m_File.close();
}

std::string CFileReader::ReadFile()
{
	std::string data;
	return data.assign(std::istreambuf_iterator<char>(m_File), std::istreambuf_iterator<char>());
}


