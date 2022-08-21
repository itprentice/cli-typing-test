#ifndef TYP_LINE_H
#define TYP_LINE_H

#include <string>
#include <vector>

#include "Typ_Word.h"

class Typ_Line{
    private:
        int maxLineLength;
        int currentLineLength;
        std::vector<Typ_Word> words;
    protected:
        bool incrementCurrentLength();
    public:
        int getMaxLineLength();
        void setMaxLineLength(int newMax);

        bool pushWord(const Typ_Word &word);
        void popWord();
        const Typ_Word& peekWord();
        const Typ_Word& getWord(int index);
        std::string genLineString();
};

#endif