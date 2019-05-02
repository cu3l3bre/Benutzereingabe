
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int EingabeZahl1 = 0;
	cout << "Geben Sie eine Ganzzahl ein: ";
	cin >> EingabeZahl1;
	cout << "Sie haben die Ganzzahl " << EingabeZahl1 << " eingegeben" << endl;
	
	float EingabeZahl2 = 0.0;
	cout << "Geben Sie eine Kommazahl ein: ";
	cin >> EingabeZahl2;
	cout << "Sie haben die Kommazahl " << EingabeZahl2 << " eingegeben" << endl;

	char EingabeBuchstabe = char(0);
	cout << "Geben Sie ein Symbol ein: ";
	cin >> EingabeBuchstabe;
	cout << "Sie haben das Symbol " << EingabeBuchstabe << " eingegeben" << endl;

	string EingabeString = "";
	cout << "Geben Sie einen String ein: ";
	cin >> EingabeString;
	cout << "Sie haben den String " << EingabeString << " eingegeben" << endl;

	system("pause");
	return 0;
}


