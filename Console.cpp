#include <iostream>
#include <strings.h>

using namespace std;


//Funktionen
void switsh (bool a);
void home ();

//Die main die angibt was wann gestartet wird.
int main(void) {
	
	//erstellt variablen
	string hstring;
	bool a = 1;
	bool *faltru = &a;
	cout << faltru << endl<<endl;
	
	//Schaltet auf False
	cin >> hstring;
	if (hstring != "Passwort"){
		*faltru=0;
	}
	
	switsh(*faltru);

	//startet den HauptScript
	if (a == 1){
		home();
	} else {
		return 0;
	}

	cin.sync();
	cin.get();
	return 0;
}

//Sagt den Benutzer ob es falsch oder war ist
void switsh (bool a) {
	
	if (a == true){
		//Tut so ob wär es ein Passwort um vor Möglichen Variablen Hacks zu schützen. Hier solte ein Falsches Passwort rein aber so Logisch wie Möglich
		string pass= "Ashasdlwieasdljakhdsadeinar";
		
		//Sagt dem benutzer was 1 ist
		string b = "Richtig/true\n\n";
		cout << b;

	} else {
		
		//sagt dem benutzer was 0 ist
		string b = "Falsch/false";
		cout << b;
		
	}
}

void home () {
	//legt einen Schalter an mit der Variable i
	bool i=1;
	//Hierauf wird der Command Geschrieben
	string hstring = "start calc";
	
	cout << "Gib help ein um die Zusatz optionen zu sehen\n";
	
	//Hierauf wird das Command System arbeiten.
	while (i) {
		//Hier wird nach einen Command gefragt
		cin >> hstring;
		cout << endl;

		//Hier wird überprüft welcher command eingegeben wurde
		if (hstring == "stop"){
			//Stopt das Program
			i=0;
		} else if (hstring == "help"){

			//zeigt infos an
			cout << "stop\t eingeben um das Program zu stoppen\n"
				 << "help\t eingeben um die Informationen zu bekommen\n";
		} else if (hstring == "cmd") {

			//startet die Standart-Console von Windows
			system("start cmd");
		} else if (hstring == "DB")
			system("start MySQ-DB.exe");

		else {

			//zeigt infos an
			cout << "stop\t eingeben um das Program zu stoppen\n"
				 << "help\t eingeben um die Informationen zu bekommen\n";
		}

		cin.sync();
	}

}
