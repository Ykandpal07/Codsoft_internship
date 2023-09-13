#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	cout << "\n\t\t\tGuessTheNumber game!"
		<< endl;
	cout << "You have to guess a number between 1 and 100. "<< endl;

	while (true) {
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for easy level!\t";
		cout << "2 for medium level!\t";
		cout << "3 for difficult level!\t";
		cout << "0 for ending the game level!\n" << endl;
		int DC;
		cout << "Enter the number: ";
		cin >> DC;

		srand(time(0));
		int secretNumber = 1 + (rand() % 100);
		int playerChoice;

		if (DC == 1) {
			cout << "\nYou have 10 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++) {

				cout << "\n\nEnter the number: ";
				cin >> playerChoice;
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}

		else if (DC == 2) {
			cout << "\nYou have 7 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {

				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

		
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
	
		else if (DC == 3) {
			cout << "\nYou have 5 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {

			
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				if (playerChoice == secretNumber) {
					cout << "You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks alot for playing...."
						<< endl;
					cout << "Play the game again with "
							"us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "secret number is "
								"smaller than the number "
								"you have chosed"
							<< endl;
					}
					else {
						cout << "secret number is "
								"greater than the number "
								"you have chosed"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", You lost\n\n";
						cout << "Play the game again to "
								"win and enjoy\n\n";
					}
				}
			}
		}
		else if (DC == 0) {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice "
				<< endl;
		}
	}
	return 0;
}