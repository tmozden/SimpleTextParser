#include <iostream>

#include "stpVersion.h"
#include "stpCLI.h"
#include "simpleTextParser.h"

//Debug
#include <iostream>

using namespace std;

//Constructor 
SimpleTextParser::SimpleTextParser() {
	vector<TokenDefinition *> tokens;
	tokens.push_back(new TextTokenDefinition(EXIT_TOKEN, "exit"));
	cli = StpCLI(tokens);
}


// Command line functions 

void SimpleTextParser::setPrompt(string newPrompt) {
	cli.setPrompt(newPrompt);
}

vector<Token> SimpleTextParser::promptUserForInput() {
	return cli.promptUserForInput();
}

//Other stuff

int main(int argc, char *argv[]) {

	cout << "SimpleTextParser" << " Version " << SimpleTextParser_VERSION_MAJOR << "."
              << SimpleTextParser_VERSION_MINOR << endl;

    SimpleTextParser stp = SimpleTextParser();

    bool shouldQuit = false;
    vector<Token> inputTokens;
    do {
    	inputTokens = stp.promptUserForInput();

		if(!inputTokens.empty()) {
			if(inputTokens[0].typeId == EXIT_TOKEN) {
				shouldQuit = true;
			}
		}
    } while(!shouldQuit);
	return 0;
}


