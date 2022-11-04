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
	cout << endl;
	
	ifstream input(filename);
	if (!input)
	{
		cout << "Error opening file " << filename << endl;
		return 1;
	}
	
	//loop while response is yes
	char response = 'y';
	while (response == 'y')
	{
		// read 8 lines
		for (int i = 0; i < 8; i++)
		{
			string line;
			getline(input, line);
			cout << line << endl;
			//end of file
			if (input.eof())
			{
				cout << "End of file reached" << endl;
				system("pause");
				return 0;
			} // end if condition
		} // end for loop
		cout << endl;
		cout << "Continue? (y/n): ";
		cin >> response;
		cout << endl;
	} //end while loop

	if (response == 'n'){
	cout << "Bye\n";
	}
	system("pause");
	return 0;
} // end main function
