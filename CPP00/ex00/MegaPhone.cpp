#include <iostream>

void	MegaPhone(char	*str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i <= 'z'])
			str[i] = str[i] - 32;
	}
	std::cout << str;
	return ;
}

int	main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < argc)
		MegaPhone(argv[i]);
	std::cout << std::endl;
	return (0);
}
