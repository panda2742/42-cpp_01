#include "dumb_sed_utils.hpp"
#include "DumbSed.hpp"
#include <fstream>

// Constructors & Destructors
DumbSed::DumbSed(
	const std::string &filename,
	const std::string &s1,
	const std::string &s2)
	: _filename(filename), _s1(s1), _s2(s2)
{
	_outFilename = filename + ".replace";
}

DumbSed::~DumbSed()
{}

// Methods
bool DumbSed::openFiles()
{
	_infile.open(_filename.c_str());
	if (!_infile)
	{
		std::cout << BRED "Error while opening infile: ";
		perror("error");
		return false;
	}

	_outfile.open(_outFilename.c_str());
	if (!_outfile)
	{
		_infile.close();
		std::cout << BRED "Error while opening outfile: ";
		perror("error");
		return false;
	}

	return true;
}

void DumbSed::execute(void)
{
	if (_s1.length() == 0)
	{
		std::cout << "\e[38;2;255;0;0mString _s1 is empty.\e[0m" << std::endl;
		return;
	}

	std::string	line;

	while (std::getline(_infile, line))
	{
		std::string::size_type	pos = 0;

		while (true)
		{
			pos = line.find(_s1, pos);

			if (pos == std::string::npos)
				break ;

			line.erase(pos, _s1.length());
			line.insert(pos, _s2);

			pos += _s2.length();
		}

		_outfile << line << std::endl;
	}
}

// Getters
const std::string &DumbSed::getFilename()
const {
	return _filename;
}

const std::string &DumbSed::getOutFilename()
const {
	return _outFilename;
}

const std::string &DumbSed::getS1()
const {
	return _s1;
}

const std::string &DumbSed::getS2()
const {
	return _s2;
}

const std::ifstream &DumbSed::getInfile()
const {
	return _infile;
}

const std::ofstream &DumbSed::getOutfile()
const {
	return _outfile;
}

// Setters
void DumbSed::setFilename(const std::string &filename)
{
	_filename = filename;
}

void DumbSed::setOutFilename(const std::string &outFilename)
{
	_outFilename = outFilename;
}

void DumbSed::setS1(const std::string &s1)
{
	_s1 = s1;
}

void DumbSed::setS2(const std::string &s2)
{
	_s2 = s2;
}

