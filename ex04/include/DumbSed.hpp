#ifndef DUMBSED_HPP
# define DUMBSED_HPP

# include <fstream>
# include <iostream>

class DumbSed {
	public:
	// Constructors & Destructors
	DumbSed(const std::string &filename, const std::string &s1, const std::string &s2);
	~DumbSed();

	// Methods
	bool openFiles();
	void execute();

	// Getters
	const std::string &getFilename() const;
	const std::string &getOutFilename() const;
	const std::string &getS1() const;
	const std::string &getS2() const;
	const std::ifstream &getInfile() const;
	const std::ofstream &getOutfile() const;

	// Setters
	void setFilename(const std::string &filename);
	void setOutFilename(const std::string &outFilename);
	void setS1(const std::string &s1);
	void setS2(const std::string &s2);

	private:
	// Attributes
	std::string		_filename;
	std::string		_outFilename;
	std::string		_s1;
	std::string		_s2;

	std::ifstream	_infile;
	std::ofstream	_outfile;
};

#endif