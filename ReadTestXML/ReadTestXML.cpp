// ReadTestXML.cpp : Defines the entry point for the console application.

#include "../Includes/FileManager.h"

// put tests here
int main()
{
	// run the file manager reat test to read in the test xml
	Tests tests = FileManager::readTestFile("testXML.xml");


	// print the tests to the cout
	

    return 0;
}