#include<string.h>
#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
void dice();
void game()
{
	//initiating variables
	int strength = 10;
	int skill = 10;
	int i = 2;
	string characterName;
	//getting name
	printf("Enter your character name ");
	cin >> characterName;
	while (characterName.length() < 1)
	{
		i++;
		cout << "Try again";
		cin >> characterName;
	}
	//generating numbers
	srand(time(NULL) * i);//seeds generator
	strength = 12 + (rand() % 4) + (rand() % 12);//sets strength
	srand(time(NULL) * (i + 10));//seeds generator
	skill = 12 + (rand() % 4) + ((rand() * 23) % 12);//sets skill
	printf("The strength value is %d \n", strength);//prints result
	printf("The skill value is %d \n", skill);//prints result
	cout << "Your name is " << characterName;//prints name
}

int main() {
	int input;
	printf("which program 1 or 2");
	cin >> input;
	switch (input)
	{
	case 1:
		dice();
		break;
	case 2:
		game();
		break;
	default:
		break;
	}
}



void dice()
{
	/*defining variables*/
	char terminate;
	int diceChoice;
	while (true) {
		/*loop that repaets*/
		printf("How many sided dice do you want to use (4, 6, 12)");
		cin >> diceChoice;
		/* input handler*/
		switch (diceChoice)
		{
		case 4:
			srand(time(NULL) * 12);
			/*generates numbers*/
			printf("4 sided dice thrown result is %d\n", ((rand() % 4) + 1));
			break;
		case 6:
			srand(time(NULL) * 4);
			/*generates numbers*/
			printf("6 sided dice thrown result is %d\n", ((rand() % 6) + 1));
			break;
		case 12:
			srand(time(NULL) * 6);
			/*generates numbers*/
			printf("12 sided dice thrown result is %d\n", ((rand() % 12) + 1));
			break;
		default:
			printf("please enter a valid number");
			break;
		}
		cout << "to terminate press enter else q then enter";
		cin >> terminate;
		if (toupper(terminate) != 'Q') 
		{
			return ;
		}
	}
	/*prints results*/
	printf("First number: %d\n", rand() % 100);
	srand(time(NULL));
	printf("Random number: %d\n", rand() % 100);
	srand(1);
	printf("Again the first number: %d\n", rand() % 100);

	return ;
}
