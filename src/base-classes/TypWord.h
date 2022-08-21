#ifndef TYPWORD_H
#define TYPWORD_H
#include <string>

class TypWord{
    private:
        int numOfChars;
        std::string wordString;
    public:
        TypWord();
        TypWord(int numOfChars, const std::string &wordString);
        ~TypWord();

        void setNumOfChars(int numOfChars);
        int getNumOfChars();

        void setWordString(const std::string &wordString);
        std::string getWordString();


};

#endif