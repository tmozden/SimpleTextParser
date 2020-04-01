#include <iostream>

#include "stpCLI.h"

using namespace std;

StpCLI::StpCLI() {
	prompt = ">>";
}

StpCLI::StpCLI(vector<TokenDefinition *> tokenDefinitions) {
	prompt = ">>";
	this->tokenDefinitions = tokenDefinitions;
}

StpCLI::~StpCLI() {
	for(int i; i < tokenDefinitions.size(); i ++) {
		delete tokenDefinitions[i];
	}
}

void StpCLI::setPrompt(string newPrompt) {
	prompt = newPrompt;
}

vector<Token> StpCLI::promptUserForInput() {
	string userInput;
	cout << prompt;
	cin >> userInput;

	vector<Token> output;

	//Simple parse will be improved
	for(int i = 0; i < tokenDefinitions.size(); i++) {

		if( tokenDefinitions[i]->tokenMatches(userInput) ) {
			output.push_back(Token(tokenDefinitions[i]->getTokenId(), userInput));
			break;
		}
	}
	return output;
}