#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <math.h>
#include <vector>
#include <experimental/random>



void start()
{
	std::cout << "Guessing Game" << std::endl;
	std::cout << "1. Beginner (numbers between 1 and 10)" << std::endl;
	std::cout << "2. Intermediate (numbers between 1 and 100)" << std::endl;
	std::cout << "3. Advanced (numbers between 1 and 1000)" << std::endl;
	std::cout << "4. Expert (numbers between 1 and 10000)" << std::endl;
	std::cout << "Type the number corresponding to the level you want to play:" << std::endl;
}

int getInput()
{
	int in;
	std::cin >> in;
	return in;
}

void printGuesses(std::vector<int> v)
{
	for(std::size_t i = 0; i < v.size(); i++){
		std::cout << v[i] << " ";
	}
}

void game(int level)
{
	if(level > 4 || level < 1){
		std::cout << "Error select between 1 through 4" << std::endl;
		int input = getInput();
		game(input);
	}
	else{
		int theValue = std::experimental::randint(1, (int)pow(10, level));
		int guess = 1;
		bool correct = false;
		std::cout << "Enter a guess" << std::endl;
		std::vector<int> guessVector;
		while(!correct){
			int select;
			std::cin >> select;
			guessVector.insert(guessVector.end(),select);
			if(select == theValue){
				std::cout << "Congratulations! It took you " << guess << " guesses." << std::endl;
				std::cout << "Would you like to play again?" << std::endl;
				std::string resp;
				std::cin >> resp;
				if(resp.compare("yes") == 0){
					printGuesses(guessVector);
					std::cout << std::endl;
					guessVector.clear();
					correct = false;
					std::cout << "Enter a guess" << std::endl;
					guess = 1;
					theValue = std::experimental::randint(1, (int)pow(10, level));
				}
				else{
					correct = true;
					printGuesses(guessVector);
				}
			}
			else{
				if(select > theValue){
					std::cout << "You guessed too high. Try again." << std::endl;
					guess++;
				}
				else{
					std::cout << "You guessed too low. Try again." << std::endl;
					guess++;
				}
			}
		}
	}
}



int main()
{

	start();
	int input = getInput();
	game(input);
//	for(int i = 0; i < 10; i++){
//		std::cout << rand() % (int)pow(10, 3) + 1 << std::endl;
//	}

	return 0;
}
