#ifndef TYPLINE_H
#define TYPLINE_H

#include <string>
#include <vector>

class TypLine{
    private:
        size_t maxLength;
        size_t currentLength;
        std::vector<std::string> words;
    protected:
        bool increaseCurrentLengthByWord(size_t wordLength);
        void decreaseCurrentLengthByWord(size_t wordLength);
    public:
        TypLine(size_t maxLength = 50);
        size_t getMaxLength();
        void changeMaxLength(size_t newMax);
        size_t getCurrentLength();
        size_t getNumOfWords();

        bool pushWord(const std::string &word);
        void popWord();
        const std::string& peekWord();
        const std::string& getWord(size_t index);
        std::string genLineString();
};

#endif