#include "stdafx.h"
#include "Lexical.h"
#include <iostream>
#include <string>


using namespace std;


void LexicalAnalyzer::Traverse(string sentence)
{
	// while for traverse sentence		
	//int i = 0;
	for (int i = 0; i != '$' ; i++)
	{

		char ch;
		string test ="";
		//while for build token
		while (sentence[i] != ' ')
		{
			ch = sentence[i];			
			test += ch;

			i++;			
		}				
		//call to find code and value
		string result = Compare(test ,i);
		cout << " : " <<result<<endl;
			
	}

}

string LexicalAnalyzer::Compare(string word,int length)
{	
	string key = word;
	bool flag=0;
	cout << key;
	//keywords
	if (key == "case") { flag = 1; return "1"; }
	else if (key == "char") { flag = 1; return "2"; }
	else if (key == "else") { flag = 1; return "3"; }
	else if (key == "float") { flag = 1; return "4"; }
	else if (key == "for") { flag = 1; return "5"; }
	else if (key == "if") { flag = 1; return "6"; }
	else if (key == "int") { flag = 1; return "7"; }
	else if (key == "switch") { flag = 1; return "8"; }
	else if (key == "stirng") { flag = 1; return "9"; }
	else if (key == "while") { flag = 1; return "10"; }


	if (flag ==0)
	{
		//compare operators
		if (key == "<") { flag = 1; return "12,LT"; }
		else if (key == "<=") { flag = 1; return "12,LE"; }
		else if (key == "==") { flag = 1; return "12,EQ"; }
		else if (key == ">") { flag = 1; return "12,GT"; }
		else if (key == ">=") { flag = 1; return "12,GE"; }
		else if (key == "!=") { flag = 1; return "12,NE"; }				
	}

	else if (flag == 0)
	{
		//identifier ,just Lowercase letter
		if ((word[0] >= 'a' && word[0] <= 'z') )
		{
			
			//call S.T
			return "11";

		}

		//numbers,just integer
		else if (word[0] >= 0 && word[0] <= 9) {
			return "13";
			/*bool idflag = 1;
			for (int i = 0; i < length; i++)
			{
				if (!(word[i] >= 0 && word[i] <= 9))
				{
					idflag = 0;
				}
			}

			if (idflag == 1)
			{				
				return "13";
			}
			else
			{
				return "Wrong integer!";
			}*/
		}
		else
		{
			return "unavailable input! ";
		}
	}
	
}

void LexicalAnalyzer::Enum()
{
	enum token
	{
		CASE = 1,
		CHAR = 2,
		ELSE = 3,
		FLOAT = 4,
		FOR = 5,
		IF = 6,
		INT = 7,
		SWITCH = 8,
		STRING = 9,
		WHILE = 10,

		ID = 11,
		COMPAREOPERATOR = 12,
		CONSTANT = 13,
		SEMICOLON = 14
	};

}




	

