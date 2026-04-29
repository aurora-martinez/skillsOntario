#include <iostream>
#include <vector>

int idNumber;
std::string n, g, b,c,bi,v, t;
int i;
bool s;
std::string type;
struct ID {
		std::string type;
		int idNumber;
};
ID id;
int idtype;
int idnumber;

class Species {
public:
	std::string name;
	std::string gender;
	bool spayed;
	std::string breed;
	std::string colour;
	std::string birthday;
	std::string vaccineStatus;
	ID identification;

	Species(std::string n, std::string g, bool s, std::string b, std::string c, std::string bi, std::string v, ID id ) {
		name = n;
		gender = g;
		spayed = s;
		breed = b;
		colour = c;
		birthday = bi;
		vaccineStatus = v;
		identification = id;
	};
	Species(std::string n, std::string g, bool s, std::string b, std::string c, std::string bi, std::string v ) {
		name = n;
		gender = g;
		spayed = s;
		breed = b;
		colour = c;
		birthday = bi;
		vaccineStatus = v;
	};
};

std::vector <Species> Animals;

void addAnimal() {
	char idyorn;
	bool haveid;
	std::cout << "\nEnter Name: ";
	std::cin >> n;
	std::cout << "\nEnter gender: ";
	std::cin >> g;
	std::cout << "\nAre they spayed? (y/n) ";
	char s;
	bool sp;
	std::cin >> s;
	if (s == 'y') {
		sp = true;
	}
	else if (s == 'n') {
		sp = false;
	}
	std::cout << "\nEnter breed: ";
	std::cin >> b;
	std::cout << "\nEnter colour: ";
	std::cin >> c;
	std::cout << "\nEnter birthday: ";
	std::cin >> bi;
	std::cout << "\nEnter Vaccine Status (enter #):\n1 - Up to Date\n2 - Late \n3 - Unknown\n";
	std::cin >> v;
	std::cout << "\nDo they have a form of identification? (y/n)";
	std::cin >> idyorn;
	if (idyorn == 'y') {
		haveid = true;
		std::cout << "\nEnter id type: \n1 - Bar Code\n2 - Micro chipped\n: ";
		std::cin >> g;
		if (idtype == 1){
			type = "Bar Code";
		}
		else if (idtype == 2){
			type = "Micro-Chip";
		}
		std::cout << "\nEnter ID number: ";
		std::cin >> idnumber;
		id = {type, idnumber};
		Species S = {n,g,sp,b,c,bi,v, id};
	}
	else {
		haveid = false;
		Species S = {n,g,sp,b,c,bi,v};
	}
}
