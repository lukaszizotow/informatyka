#include <iostream>

using namespace std;
bool Funkcja(string wyraz1, string wyraz2);
int main()
{
	string wyraz1;
	string wyraz2;


	cout << "podaj pierwszą nazwe:";
	cin >> wyraz1;

	cout << "podaj drugą nazwe:";
	cin >> wyraz2;
	if (!Funkcja(wyraz1, wyraz2))
		cout << "wyrazy są anagramami" << endl;
	else
		cout << "wyrazy nie są anagramami" << endl;
}

bool Funkcja(string wyraz1, string wyraz2) {
	int dl1, dl2;
	char licz[128];

	dl1 = wyraz1.size();
	dl2 = wyraz2.size();

	if (dl1 != dl2) {
		return false;
	}
	for (int i = 0; i < dl1; i++)
		licz[wyraz1[i]]++;

	for (int i = 0; i < dl1; i++)
		licz[wyraz2[i]]--;

	for (int i = 0; i < 128; i++)
		if (licz[i] != 0) {
			return false;
		}
	return true;

}