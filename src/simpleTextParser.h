#ifndef SIMPLE_TEXT_PARSER_H
#define SIMPLE_TEXT_PARSER_H

#include <string>
#include <vector>

//Token definition types
#include "tokenDefinition.h"
#include "textTokenDefinition.h"

#define EXIT_TOKEN 1


class SimpleTextParser {
	StpCLI cli;

public:
	//Constructor
	SimpleTextParser();

	//Command Line Interface functions

	//Sets the value of the prompt string
	//presented to the user when asking 
	//for input. 
	void setPrompt(string newPrompt);

	//Returns a vector of token pointers.
	//These tokens contain the tokens the user input.
	vector<Token> promptUserForInput();


	
};

#endif