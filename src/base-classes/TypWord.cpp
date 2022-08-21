#include "TypWord.h"

TypWord::TypWord(int numOfChars, const std::string &wordString){
    this->numOfChars = numOfChars;
    this->wordString = wordString;
}

TypWord::TypWord(){
    this->numOfChars = 0;
    this->wordString = "";
}

int TypWord::getNumOfChars(){
    return this->numOfChars;
}

void TypWord::setNumOfChars(int newNumOfChars){
    this->numOfChars = newNumOfChars;
}

std::string TypWord::getWordString(){
    return this->wordString;
}

void TypWord::setWordString(const std::string &newWordString){
    this->wordString = newWordString;
}

TypWord::~TypWord(){

}