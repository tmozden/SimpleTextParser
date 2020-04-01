#ifndef TEXT_TOKEN_DEFINITION_H
#define TEXT_TOKEN_DEFINITION_H

#include <string>

#include "tokenDefinition.h"

class TextTokenDefinition : public TokenDefinition {
	string tokenText;

public:
	TextTokenDefinition(int tokenId, string tokenText);

	bool tokenMatches(string stringVal);

};

#endif