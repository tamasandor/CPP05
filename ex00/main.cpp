#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat all("Janos", 42);
	try
	{
		Bureaucrat erroring("Bela", 100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << all;
}