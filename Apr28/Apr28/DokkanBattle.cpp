#include <iostream>
using namespace std;
double NUKE(int ATK, int Orbs);
int main() {
	int ATK;
	int Orbs;
	double damage;
	cout << "I will attempt to help you understand simple damage calculations for DBZ Dokkan Battle." << endl;
	cout << "This assumes Gogeta is your friend." << endl;
	cout << "First, give me your character's basic attack stat." << endl;
	cin >> ATK;
	cout << "Next, give me the amount of Orbs you have." << endl;
	cin >> Orbs;
	cout << "Here is the amount of damage you will do." << endl;
	damage = NUKE(ATK, Orbs);
	cout << damage << endl;
}
double NUKE(int ATK, int Orbs) {
	double damage = (ATK*(1 + (0.3*Orbs))+3000)*1.4;
	return damage;
}