/*
 Պարզ խաղ՝ գրված C++-ով

 Ծրագիրը գործարկելու համար:
    g++ simple-game.cpp -o simple-game.exe
    ./simple-game.exe 
*/

#include <iostream>
#include <string>

bool ask(std::string question, std::string expectedAnswer) {
    std::cout << question << std::endl;
    std::string answer;
    std::cin >> answer;
    return answer == expectedAnswer;
}

int main() {
    int points = 0;
    std::string answer;

    if(ask("What is the capital of Armenia?", "Yerevan")) {
        points = points + 1;
    }

    if(ask("What is the capital of France?", "Paris")) {
        points = points + 1;
    }

    std::cout << "You received " << points << " points" << std::endl;
    return 0;
}