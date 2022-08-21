#include "Typ_Word.h"

Typ_Word::Typ_Word(int numOfChars, const std::string &wordString){
    this->numOfChars = numOfChars;
    this->wordString = wordString;
}

Typ_Word::Typ_Word(){
    this->numOfChars = 0;
    this->wordString = "";
}

int Typ_Word::getNumOfChars(){
    return this->numOfChars;
}

void Typ_Word::setNumOfChars(int newNumOfChars){
    this->numOfChars = newNumOfChars;
}

std::string Typ_Word::getWordString(){
    return this->wordString;
}

void Typ_Word::setWordString(const std::string &newWordString){
    this->wordString = newWordString;
}

Typ_Word::~Typ_Word(){

}