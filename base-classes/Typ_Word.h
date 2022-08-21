#ifndef TYP_WORD_H
#define TYP_WORD_H
#include <string>

class Typ_Word{
    private:
        int numOfChars;
        std::string wordString;
    public:
        Typ_Word();
        Typ_Word(int numOfChars, const std::string &wordString);
        ~Typ_Word();

        void setNumOfChars(int numOfChars);
        int getNumOfChars();

        void setWordString(const std::string &wordString);
        std::string getWordString();


};

#endif