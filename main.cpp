// app.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
	string str;
	int n;

	if (argc == 1)
		cout << "Parameter nebol zadany" << endl;
	if (argc == 2)
	{
		if (string(argv[argc - 1]) == "-c")
		{
			getline(std::cin, str);
			//cout << str << endl;
			//pocitanie znakov
			n = str.length();
		
			cout << "Pocet znakov je "<< n << endl;
		}

		if (string(argv[argc - 1]) == "-l")
		{
			getline(std::cin, str);
			//cout << str << endl;
			//pocitanie slov
			int poc = 1;
			for (int i = 0; i < int(str.length()); i++)
			{
				if (isspace(str[i]))
					poc++;
			}

			cout << "Pocet slov je " << poc << endl;
		}

		if (string(argv[argc - 1]) == "-w")
		{
			getline(std::cin, str);
			cout << str << endl;
			//pocitanie riadkov
			
		}
	}
	
	system("pause");

	return 0;
}
