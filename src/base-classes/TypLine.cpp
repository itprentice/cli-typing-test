#include "TypLine.h"
#include <cassert>

TypLine::TypLine(size_t maxLength){
    this->maxLength = maxLength;
    this->currentLength = 0;
    this->words = std::vector<std::string>();
}

/**
 * @brief function that attempts to increase currentLength by the provided wordLength
 * 
 * @param wordLength the number of characters in the word
 * @return true if currentLength <= maxLength after adding word 
 * @return false if unable to add word
 */
bool TypLine::increaseCurrentLengthByWord(size_t wordLength){
    size_t addPrevSpace = 0;
    if (this->currentLength > 0){
        addPrevSpace = 1; //accounting for a space between the previous word and the next
    }
    size_t newVal = this->currentLength + addPrevSpace + wordLength;
    if (newVal > this->maxLength){
        return false; //was not able to add word to list
    }
    else{
        this->currentLength = newVal;
        return true;
    }
}
/**
 * @brief function that decreases currentLength by the provided wordLength
 * 
 * @param wordLength the number of characters in the word being removed
 */
void TypLine::decreaseCurrentLengthByWord(size_t wordLength){
    size_t newVal = this->currentLength - wordLength - 1; //-1 is accounting for space between the previous and current word
    //if we are removing the last word, do not need to account for space
    if (newVal < 0){
        newVal++;
        assert(newVal == 0);
    }
    this->currentLength = newVal;
}

/**
 * @brief getter for max length (max number of characters in the line)
 * 
 * @return size_t 
 */
size_t TypLine::getMaxLength(){
    return this->maxLength;
}
/**
 * @brief setter for max length (max number of characters in the line)
 * 
 * @param newMax 
 */
void TypLine::changeMaxLength(size_t newMax){
    this->maxLength = newMax;
}
/**
 * @brief returns current number of characters in the line
 * 
 * @return size_t 
 */
size_t TypLine::getCurrentLength(){
    return this->currentLength;
}
/**
 * @brief returns current number of words in the line
 * 
 * @return size_t 
 */
size_t TypLine::getNumOfWords(){
    return this->words.size();
}
/**
 * @brief wrapper for vector::push_back. pushes back the provided word and increases currentLength 
 * 
 * @param word string to be added to the line
 * @return true if operation was sucessful
 * @return false if word would go past the max length (accounting for space between words)
 */
bool TypLine::pushWord(const std::string &word){
    bool retVal = this->increaseCurrentLengthByWord(word.length());
    if (retVal){
        this->words.push_back(word);
    }
    return retVal;
}
/**
 * @brief removes the last word
 * 
 */
void TypLine::popWord(){
    this->decreaseCurrentLengthByWord(this->words.back().length());
    this->words.pop_back();
}
/**
 * @brief returns word at top of stack
 * 
 * @return const std::string& 
 */
const std::string& TypLine::peekWord(){
    return this->words.back();
}
/**
 * @brief returns word at index, if it is within bounds
 * 
 * @param index 
 * @return const std::string& 
 */
const std::string& TypLine::getWord(size_t index){
    return this->words.at(index);
}
/**
 * @brief generates the string represented by the line and returns it
 * 
 * @return std::string 
 */
std::string TypLine::genLineString(){
    std::string retString = "";
    auto it = this->words.begin();
    if (it != this->words.end()){
        retString += *it;
        it++;
        for ( ; it != this->words.end(); it++){
            retString += " "+*it;
        }
    }
    return retString;
}


