#include "Item.h";
#include "Suspect.h";
#include<string>
#include<iostream>
#include <fstream>
#include<cstdlib>
#include<time.h>
#include<vector>
using namespace std;

class MurderMysteryGame{
private:
	vector<Suspect> suspects;
	vector<Item> items;
	vector<string> locations;

public:	
	MurderMysteryGame() {
		srand(time(NULL)); //initialize random seed
	}
	void initialize() {
		string suspect_names[] = { "Liam", "Noah", "William", "James", "Oliver", "Lucas", "Mason" };
		string locations[] = {"basement", "main", "kitchen", "garden","living room","toilet","Dining", "laundry", "Pool", "BBQ", "Storage", "Garage", "Bedroom 1", "Bedroom 2", "Toilet 2", "Toilet 3"};
	
		//7 suspects		
		for (int i = 0; i < 7; i++) {			
			Suspect suspect = Suspect();
			suspects.push_back(suspect);
		}

		for (int i = 0; i < suspects.size(); i++) {

		}


	}
	void displayIntro() {			   
		cout << "************ Welcome to Text Adventure Game ****************";
		this->showHelp();
	}
	void displayMap() {
		string line;
		ifstream introFile("Map.txt");
		if (introFile.is_open())
		{
			while (getline(introFile, line))
			{
				cout << line << endl;
			}
			introFile.close();
		}		
	}
	void displayLocation() {}
	void showHelp(){
		string line;
		ifstream introFile("intro.txt");
		if (introFile.is_open())
		{
			while (getline(introFile, line))
			{
				cout << line << endl;
			}
			introFile.close();
		}
	}
	void GameOverW() {}
	void GameOverL() {}
	void resetGame() {}
	void playGame() {}
	string askForString(string endgame) {}
	char askForLetter(char endname) {}
	int askForNumber(int number){}
};

int main() {
	MurderMysteryGame game = MurderMysteryGame();

	//Game Intro 
	game.displayIntro();	
	cin.ignore();
	cin.get();

	//Game Initialization - Suspects, Items, Locations
	game.initialize();
	

	//showing map
	game.displayMap();




	

	return 0;
}