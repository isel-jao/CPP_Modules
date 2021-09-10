#include <iostream>
#include <fstream>

static void			replaceLine(std::string& line, std::string string, std::string pattern)
{
	std::size_t start = 0;
	while (true)
	{
		std::size_t found = line.find(string, start);
		
		if (found != std::string::npos)
		{
			line.replace(found, string.length(), pattern);
			start = found + pattern.length();
		}
		else
			break ;
	}
}

int					main(int argc, char* argv[])
{
	if (argc != 4)
		std::cout << "Number of arguments is invalid." << std::endl;
	else
	{
		std::string	file(argv[1]);
		std::string	string(argv[2]);
		std::string	pattern(argv[3]);

		if (string.empty() || pattern.empty())
			std::cout << "An argument is empty." << std::endl;
		else
		{
			std::ifstream	ifs(file);
			if (ifs.is_open())
			{
				std::ofstream	ofs(file + ".replace" );

				if (ofs.is_open())
				{
					while (true)
					{
						std::string	line;

						getline(ifs, line);
						replaceLine(line, string, pattern);
						ofs << line;
						if (ifs.eof())
							break ;
						else
							ofs << '\n';
					}
				}
				else
					std::cout << "Open Failed" << std::endl;
				ofs.close();
			}
			else
				std::cout << "Open Failed" << std::endl;
			ifs.close();
		}
	}
	return (0);
}