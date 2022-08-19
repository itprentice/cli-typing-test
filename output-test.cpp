#include <iostream>
#include <conio.h> //this will only work on windows so mayhaple don't use

using namespace std;
int main(void){
    cout << "0%";
    for (int i = 0; i < 99999999; i++);
    cout << "\r" << flush;
    cout << "25%" << endl;
    char answer;
    // cin.get(answer);
    // cin >> answer;
    answer = _getch();
    cout << answer;
    int count = 0;
    while (answer != '0'){
        answer = _getch();
        count++;
        if (answer == ' '){
            cout << '\r' << flush;
            for (int i = 0; i < count; i++){
                cout << ' ' << flush;
            }
            cout << '\r' << flush;
            count = 0;
        }
        else if (answer == '\b'){
            cout << '\b';
            cout << ' ';
            cout << '\b';
        }
        else{
            cout << answer;
        }
    }
    return 0;
}