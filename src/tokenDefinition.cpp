#include "tokenDefinition.h"

Token::Token(int typeId, string value) {
	this->typeId = typeId;
	this->value = value;
}


int TokenDefinition::getTokenId() {
	return tokenId;
}