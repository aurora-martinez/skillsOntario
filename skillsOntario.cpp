#include <iostream>
#include <vector>

int idNumber;

class Species {
private:
	std::string name;
	std::string gender;
	bool spayed;
	std::string breed;
	std::string colour;
	std::string birthday;
	std::string vaccineStatus;
	struct ID {
		std::string type;
		int idNumber;
	};
public:
	Species() {
		name n;
		gender g;
		spayed s;
		breed b;
		colour c;
		birthday bi;
		vaccineStatus v;
		ID id{
			type t;
		idNumber i;
		}
	}
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
	}
	else {
		haveid = false;
	}
	std::cout << "\nEnter id type: \n1 - Bar Code\n2 - Micro chipped\n: ";
	std::cin >> g;
	{n,g,sp,b,c,bi,v,{t,i}}
}
