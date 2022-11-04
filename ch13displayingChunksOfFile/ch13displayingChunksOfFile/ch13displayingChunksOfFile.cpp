// ch13displayingChunksOfFile.cpp
//

#include <iostream>
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
	while (fin.get(ch))
		cout << ch;
	fin.close();
	system("pause");
	return 0;
} // end main function