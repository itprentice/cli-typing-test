#include "TypMain.h"

int main(){
    std::cout << "hello there" << std::endl;
    const int length = 4;
    TypLine lines[length];
    for (int i = 0; i < length; i++){
        lines[i] = TypLine();
    }
    bool ifDone = false;
    int counter = 0;
    while(!ifDone){
        if (lines[counter].pushWord("hello") == false){
            counter++;
        }
        ifDone = counter == length;
    }
    for (int i = 0; i < length; i++){
        std::cout << lines[i].genLineString() << std::endl;
    }
    std::cout <<lines[0].getCurrentLength() <<std::endl;
    return 0;
}