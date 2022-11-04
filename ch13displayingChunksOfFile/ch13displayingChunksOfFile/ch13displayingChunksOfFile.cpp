// ch13displayingChunksOfFile.cpp
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "Chapter 13 Reading File by Kevin Bell\n\n";
	cout << "Enter the name of the file to be read: ";
	char filename[80];
	cin >> filename;
	
	ifstream fin(filename);
	if (!fin)
	{
		cout << "Error opening file " << filename << endl;
		return 1;
	}
	
	char ch;
	//loop while response is yes
	char response = 'y';
	while (response == 'y')
	{
		
		// Read a chunk of the file
		// read 8 lines
		for (int i = 0; i < 6; i++)
		{
			// read a line
			for (int j = 0; j < 60; j++)
			{
				fin.get(ch);
				cout << ch;
			}
		}
		cout << endl;
		cout << "Continue? (y/n): ";
		cin >> response;
		
		
		
	} //end while loop
	//Display 8 lines of rj.txt
	/*
	for (int j = 0; j < 359; j++)
	{
		fin.get(ch);
		cout << ch;
	}
	cout << endl;
	*/
	system("pause");
	return 0;
} // end main function
