/* iotofile.cpp :Defines the entry point for the console application.
*
*		**Author - Avinash**
*
*/

#include "stdafx.h"
using namespace std;

#include "iostream"
#include "fstream"
#include <string>
#include <sstream>

int main()
{
	string line, values[100];
	int inputcount, checkcount=0, intvalues[100],x;
	cout << "Enter the number of input \n";
	cin >> inputcount;
	inputcount = inputcount - 1;
	
	

	cout << "\n Performing file operations... \n";

	/*	ofstream myfile("f:/example.txt");
		if (myfile.is_open())
		{
			myfile << "This is a line.\n";
			myfile << "This is another line.\n";
			myfile.close();
		}
		else cout << "Unable to open file";
	*/
	ifstream myfile("f:/example2.txt");
	if (myfile.is_open())
	{
		while ( getline (myfile, line))
		{
			
			values[checkcount] = line;
			cout << values[checkcount] << '\n';
			checkcount++;

			if (checkcount > inputcount)
			{
				break;
			}

		}
		myfile.close();

		
		

		for (int i = 0; i < 10; i++)
		{
			cout << intvalues[i] + "\n";
		}
	}

	else cout << "Unable to open file";


	cin.get();
	system("pause");

	return 0;
}