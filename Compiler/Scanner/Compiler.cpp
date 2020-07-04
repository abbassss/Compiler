// Compiler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lexical.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


void main()
{
	LexicalAnalyzer lex;
	ifstream fin;
	string line;

	//get file
	fin.open("D:\\Compiler_Data\\test.txt", ios::in);
	if (!fin)
	{
		cout << "Error!";		
	}
	
	getline(fin,line);		
	fin.close();

	lex.Traverse(line);
	cout << endl;
	

}

