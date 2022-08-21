#ifndef TypLINE_H
#define TypLINE_H

#include <string>
#include <vector>

#include "TypWord.h"

class TypLine{
    private:
        int maxLineLength;
        int currentLineLength;
        std::vector<TypWord> words;
    protected:
        bool incrementCurrentLength();
    public:
        int getMaxLineLength();
        void setMaxLineLength(int newMax);

        bool pushWord(const TypWord &word);
        void popWord();
        const TypWord& peekWord();
        const TypWord& getWord(int index);
        std::string genLineString();
};

#endif