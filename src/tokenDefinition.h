#ifndef TOKEN_DEFINITION_H
#define TOKEN_DEFINITION_H

#import <string>

using namespace std;

struct Token {
	int typeId;
	string value;

	Token(int typeId, string value);
};


class TokenDefinition {
	
protected:
	//Identifier assigned by the user for this token. 
	int tokenId;

public:

	virtual ~TokenDefinition() {};
	// this function returns true if the given string is a match 
	// for this token. 
	virtual bool tokenMatches(string stringVal) = 0;
	int getTokenId();
};

#endif