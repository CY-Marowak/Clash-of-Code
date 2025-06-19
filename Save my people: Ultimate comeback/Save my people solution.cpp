#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Fhp, Fdm;
	cin >> Fhp >> Fdm;
	cin.ignore();

	int Ghp, Gdm;
	cin >> Ghp >> Gdm;
	cin.ignore();

	int danger = Fhp * 0.4;

	while (Fhp > 0 && Ghp > 0)
	{
		Fhp -= Gdm;
		if (Fhp <= 0)
		{
			Ghp -= Fdm * 20;
		}
		else if(Fhp <= danger)
		{
			Ghp -= Fdm * 5;
		}
		else
		{
			Ghp -= Fdm;
		}
		//cout << Fhp << " " << Ghp << endl;
	}

	if (Fhp <= 0 && Ghp <= 0) cout << "SEE YOU IN HELL!" << endl;
	else if (Fhp <= 0) cout << "I need more power. " << Ghp << endl;
	else cout << "I am the warrior! " << Fhp << endl;
}
