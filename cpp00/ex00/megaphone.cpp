#include <iostream>
int main(int argc, char **argv)
{
	int j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			j = -1;
			while (argv[i][++j] != '\0')
			{
				if (islower(argv[i][j]))		
					argv[i][j] = toupper(argv[i][j]);
			}
		}
		for(int i = 1; i < argc; i++)
			std::cout << argv[i];
		std::cout << "\n";
	}
	return (0);
}