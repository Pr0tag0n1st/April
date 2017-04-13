#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;
int main() {
	string inventory[5];
	string input;
	cout << "Would you like to pick up the magic sword?" << endl;
	getline(cin, input);
	if (input.compare("yes") == 0) {
		cout << "Ok." << endl;
		inventory[0] = "Magic Sword";
	}
	else
		cout << "Ok." << endl;
	cout << "You are now ready to face the dragon." << endl;
	if (inventory[0] == "Magic Sword") {
		cout << "Good job.  You won!" << endl;
		PlaySound(TEXT("Victory.wav"), NULL, SND_FILENAME);
		return 0;
	}
	else if (inventory[0] != "Magic Sword")
		cout << "You failed." << endl;
	PlaySound(TEXT("Fail.wav"), NULL, SND_FILENAME);
}