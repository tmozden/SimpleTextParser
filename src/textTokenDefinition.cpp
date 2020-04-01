#include <string>

#include "tokenDefinition.h"
#include "textTokenDefinition.h"

//Debug
#include <iostream>

using namespace std;

TextTokenDefinition::TextTokenDefinition(int tokenId, string tokenText) {
	this->tokenId = tokenId;
	this->tokenText = tokenText;
}

bool TextTokenDefinition::tokenMatches(string stringVal) {
	return 0 == stringVal.compare(tokenText);
}