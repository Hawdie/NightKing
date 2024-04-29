#include <iostream>
#include <stdlib.h>

int main(){

/*
Scissors cut paper
Paper covers rock
Rock crashes lizard
Lizard poisons spock
Spock smashes scissors
Scissors decapicate lizards
Lizard eats paper
Paper dissproves Spock
Spock vaporises rock
Rock crushes scissors. */

int u = 0;

srand(time(NULL));
int c = rand() % 5 + 1;

std::cout << "====================================\n";
std::cout << "==Rock Paper Scissors Lizard Spock==\n";
std::cout << "=====================================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";

std::cout << "SHOOOOOOOOT YOU NOOOOOOOOB !\n";

std::cin >> u;

int r = 1;
int p = 2;
int s = 3;
int l = 4;
int sp = 5;

switch (u) {
  case 1:
    std::cout << " ✊\n";
    break;
  case 2:
    std::cout << " ✋\n";
    break;
  case 3:
    std::cout << " ✌️\n";
    break;
  case 4:
    std::cout << " 🦎\n";
    break;
  case 5:
    std::cout << "🖖\n";
    break;

}

if (u == s && c == 2){
  std::cout << "You win ! Scissors cur paper\n";
}

else if (u == p && c == 1){
  std::cout << "You win ! Paper covers rock\n";
}

else if (u == r && c == 4){
  std::cout << "You win ! Rock crushes lizard\n";
}

else if (u == l && c == 5){
  std::cout << "You win ! Lizard poisons spock\n";
}

else if (u == sp && c == 3){
  std::cout << "You win ! Spock smashes scissors\n";
}

else if (u == s && c == 3){
  std::cout << "You win ! Scissors decapicate lizards\n";
}

else if (u == l && c == 2){
  std::cout << "You win ! Lizard eats paper\n";
}

else if (u == p && c == 5){
  std::cout << "You win ! Paper dissproves Spock\n";
}

else if (u == sp && c == 1){
  std::cout<< "You win ! Spock vaporises rock\n";
}

else if (u == r && c == 3){
  std::cout << "Rock crushes scissors. You win!\n";
}

else if (u == c){
  std::cout << "It's a tie!\n";
}

else {
  std::cout << "You looooose! GRUBASIE\n";
}


}