#ifndef STP_CLI_H
#define STP_CLI_H

#include <string>
#include <vector>

#include "tokenDefinition.h"

using namespace std;

class StpCLI {
	//The prompt to present to the user.
	string prompt;

	//Token definitions to be looked for while parsing input. 
	vector<TokenDefinition *> tokenDefinitions;

public: 
	//Constructor
	StpCLI();

	StpCLI(vector<TokenDefinition *> tokenDefinitions);

	~StpCLI();

	//Sets the prompt to this new value. 
	void setPrompt(string newPrompt);

	//Returns a vector of token pointers.
	//These tokens contain the tokens the user input.
	vector<Token> promptUserForInput();

};

#endif