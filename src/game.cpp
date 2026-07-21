#include "game.h"

#include <iostream>
#include <vector>
using namespace std;

vector<string> inventory;

void welcomePage() { 
    system("clear");
    int choice;

    cout << "Welcome to N's adventure game.\n";
    cout << "To begin the game, please make a choice below:\n\n";

    cout << "1. Go towards the forest\n";
    cout << "2. Go towards the river\n";
    cout << "3. Go towards the village\n";
	cout << "4. About this game\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

	switch (choice) {
		case 1:
			forestPath();
			break;
		case 2:
			riverPath();
			break;
		case 3:
			enterVillage();
			break;
		case 4:
			aboutGame();
			break;
		default:
			cout << "Invalid choice.";
			break;
	}
}

void forestPath() {
    system("clear");
    int choice;

    cout << "You choose to go to the forest.\nWhile walking through the forest, you hear a rustle in the bushes.\nYou turn and look at the bushes, but see nothing.\nWhat do you do?\n\n";
    
    cout << "1. Investigate the noise\n";
    cout << "2. Turn around and head back down the path\n\n";
    
    cout << "Enter your choice: ";
    cin >> choice;

	switch (choice) {
		case 1:
			investigateNoise();
			break;
		case 2:
			welcomePage();
			break;
		default:
			cout << "Invalid choice";
			break;
	}
}

void riverPath() {
    system("clear");
    int choice;

    cout << "You choose to go to the river. What do you do next?\n\n";
    
    cout << "1. Search the river for valuables\n";
    cout << "2. Continue going up river\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

	switch (choice) {
		case 1:
			searchRiver();
			break;
		case 2:
			continueUpRiver();
			break;
		default:
			cout << "Invalid choice";
			break;
	}
}

void aboutGame() {
	system("clear");
	int choice;

	cout << "This game has been a work in progress for many weeks. Over time, it is continuing to evolve.\n";
	cout << "This is a single man-made game. No AI was used to create this.\n\n";
	
	cout << "1. Exit\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		return;
	} else {
		cout << "Invalid choice";
	}
}

void investigateNoise() {
    system("clear");
    int choice;

    cout << "You choose to investigate the noise. As you investigate, you notice a fox moving through the bushes, searching for food.\n";
    cout << "The fox notices you and quickly scurries away. What do you do next?\n\n";

    cout << "1. Continue walking along the path\n";
    cout << "2. Go back to the beginning\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        continueWalkingOnPath();
    } else if (choice == 2) {
		welcomePage();
	} else {
		cout << "Invalid choice";
	}
}

void continueWalkingOnPath() {
    system("clear");
    int choice;

    cout << "You continue walking on the path. Eventually, you come across a village.\n\n";

    cout << "1. Explore the village\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

	if (choice == 1) {
		enterVillage();
	} else {
		cout << "Invalid choice";
	}
}

void searchRiver() {
    system("clear");
    int choice;

    cout << "You search the river. You find an old boot.\n\n";
	inventory.push_back("Old boot");

    cout << "1. Keep searching\n";
    cout << "2. Move up the river\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
		keepSearchingRiver();	
    } else if (choice == 2) {
        moveUpTheRiver();
    } else {
        cout << "Invalid choice";
    }
}

void continueUpRiver() {
	system("clear");
	int choice;

	cout << "You choose to continue moving up the river. You come across a village.\n\n";
	
	cout << "1. Go to the village\n\n";
	
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		enterVillage();
	} else {
		cout << "Invalid choice";
	}
}

void enterVillage() {
	system("clear");
	int choice;

	cout << "You have just entered the village. There are houses, blacksmiths, people, and most importantly: stores. Where do you want to go first?\n\n";

	cout << "1. Look for a house to stay in\n";
	cout << "2. Talk to someone\n";
	cout << "3. Go to the general store in search for food\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			lookForHouse();
			break;
		case 2:
			talkToSomeone();
			break;
		case 3:
			generalStore();
			break;
		default:
			cout << "Invalid choice";
			break;
	}
}

void keepSearchingRiver() {
	system("clear");
	int choice;

	cout << "You find a golden watch. You decide to keep it, planning to sell it for money in the future.\n\n";
	inventory.push_back("Golden watch");

	cout << "1. Move up the river\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		moveUpTheRiver();
	} else {
		cout << "Invalid choice";
	}
}

void moveUpTheRiver() {
    system("clear");
    int choice;

    cout << "As you move up the river, you notice a village on your right, and an old shed on your left. What do you do now?\n\n";
    
    cout << "1. Go to the village\n";
    cout << "2. Explore around the old shed\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

	if (choice == 1) {
		enterVillage();
	} else if (choice == 2) {
		exploreShed();
	} else {
		cout << "Invalid choice";
	}
}

void exploreShed() {
	system("clear");
	int choice;

	cout << "Inside the shed, you find shelves with old antiques, as well as a trapdoor leading somewhere below the shed. What do you choose to do?\n\n";

	cout << "1. Look for valuables on the shelves\n";
	cout << "2. Open the trapdoor\n";
	cout << "3. Leave the shed\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			lookOnShelves();
			break;
		case 2:
			openTrapdoor();
			break;
		case 3:
			leaveShed();
			break;
		default:
			cout << "Invalid choice";
			break;
	}
}

void lookOnShelves() {
	system("clear");
	int choice;

	cout << "On the shelves, you find several dusty artifacts. They all appear to be very old, but none of them are worth taking.\n\n";

	cout << "1. Go back and open the trapdoor\n";
	cout << "2. Leave the shed\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		openTrapdoor();
	} else if (choice == 2) {
		leaveShed();
	} else {
		cout << "Invalid choice";
	}
}

void openTrapdoor() {
	system("clear");
	int choice;

	cout << "You open the trapdoor. You find it to be pitch black. You decide it's not worth going down until you have a flashlight.\n\n";

	cout << "1. Leave the shed\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		leaveShed();
	} else {
		cout << "Invalid choice";
	}
}

void leaveShed() {
	system("clear");
	int choice;

	cout << "You leave the shed.\n\n";
	
	cout << "1. Go to the village\n\n";
	
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		enterVillage();
	} else {
		cout << "Invalid choice";
	}
}

void lookForHouse() {
	system("clear");
	int choice;
	
	cout << "While looking for a house to stay in, you find a map with directions to the nearest hotel. You make your way towards it, and you walk in.\n";
	cout << "The front desk lady asks what you want, and you request a room.\n\n";

	cout << "Lady: Well, that'll cost you. What do you have?\n";
	cout << "You: Uhh... I have a golden watch..\n";
	cout << "Lady: I'll take that.\n\n";

	cout << "1. Give her the watch in exchange for a room\n";
	cout << "2. Reject the offer and look for somewhere else to stay\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		gameEnd();
	} else if (choice == 2) {
		gameEnd();
	} else {
		cout << "Invalid choice";
	}
}

void talkToSomeone() {
	system("clear");
	int choice;
	
	cout << "You decide to look for someone to help you find your way around. There are several people around that you can choose from. (Be careful with who you choose...)\n\n";

	cout << "1. Talk to the person running the blacksmith station\n";
	cout << "2. Talk to a random person standing around\n";
	cout << "3. Talk to the general store manager\n";
	cout << "4. Talk to a friendly looking person\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			talkToBlacksmith();
			break;
		case 2:
			talkToRandom();
			break;
		case 3:
			gameEnd();
			break;
		case 4:
			gameEnd();	
			break;
		default:
			cout << "Invalid choice";
			break;
	}
}

void acceptHotelOffer() {
	system("clear");
	int choice;
	
	cout << "You accept the offer and give her the watch. She then gives you room key #5 and leads you to the room.\n";
	cout << "You enter the room and lock the door behind you. What do you want to do?\n\n";
	
	cout << "1. Watch TV\n";
	cout << "2. Take a shower\n";
	cout << "3. Look for something to eat\n";
	cout << "4. Read the newspaper\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			gameEnd();
			break;
		case 2:
			gameEnd();
			break;
		case 3:
			gameEnd();
			break;
		case 4:
			gameEnd();
			break;
		default:
			cout << "Invalid choice";
			break;
	}
}

void rejectHotelOffer() {
	gameEnd();
}

void talkToBlacksmith() {
	gameEnd();
}

void talkToRandom() {
	gameEnd();
}

void generalStore() {
	system("clear");
	int choice;

	cout << "You've just entered the general store. There are shelves filled with food, clothing, medicine,	camping and hunting supplies, bait, fishing gear, and more. Where do you want to look first?\n\n";

	cout << "1. Food\n";
	cout << "2. New clothes\n";
	cout << "3. Medicine\n";
	cout << "4. Camping supplies (Not enough money)\n";
	cout << "5. Hunting supplies (Not enough money)\n";
	cout << "6. Bait\n";
	cout << "7. Fishing gear (Not enough money)\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			gameEnd();
			break;
		case 2:
			gameEnd();
			break;
		case 3:
			gameEnd();
			break;
		case 4:
			gameEnd();
			break;
		case 5:
			gameEnd();
			break;
		case 6:
			gameEnd();
			break;	
		case 7:
			gameEnd();
			break;
		default:
			cout << "Invalid choice.";
			break;
	}
}

void gameEnd() {
	system("clear");
	cout << "You have reached the end of the game. Thank you for playing. In the future, more dialog and branches will be added.\n";
	return;
}
