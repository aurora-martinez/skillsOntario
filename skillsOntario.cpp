#include <iostream>
#include <vector>

int idNumber;
std::string s,n, g, b,c,bi,v, t;
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
private: 
	std::string species;
	std::string name;
	std::string gender;
	bool spayed;
	std::string breed;
	std::string colour;
	std::string birthday;
	std::string vaccineStatus;
	ID identification;
public:
	std::string getSpecies(){
		return Species::species;
	}
	std::string getName(){
		return Species::name;
	}

	std::string getGender(){
		return Species::gender;
	}

	bool isSpayed(){
		return Species::spayed;
	}

	std::string getBreed (){
		return Species::breed;
	}

	std::string getColour(){
		return Species::colour;
	}

	std::string getBirthday(){
		return Species::birthday;
	};

	std::string getVaccineStatus(){
		return Species::vaccineStatus;
	};

	ID getIdentification (){
		return Species::identification;
	};

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
	Species S;

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
		S = {n,g,sp,b,c,bi,v, id};
	}
	else {
		haveid = false;
		S = {n,g,sp,b,c,bi,v};
	}
	Animals.push_back(S);
}

void removeAnimal (ID id){
	int i = 0;
	for (Species S : Animals){
		if (S.getIdentification().type == id.type && S.getIdentification().idNumber == id.idNumber){
				Animals.erase(Animals.begin()+i);
		}
		i++;

	// for (auto it = Animals.begin(); it != Animals.end(); it++){
	// 	if ((*it).getIdentification()) {
	// 		Animals.erase(it);
	// 	}
	// }
	}
}

void searchAnimal (std::string type, std::string NorS){
	if (type == "name"){
		for (Species S : Animals){
			if (S.getName() == NorS){
				Species K=S;
				std::cout <<"\nName:" << K.getName();
				std::cout << "\nSpecies: " << K.getSpecies();
				std::cout << "\nGender:" << K.getGender();
				std::cout <<"\nSpayed: " << K.isSpayed();
				std::cout << "\nBreed: " << K.getBreed();
				std::cout << "\nColour: " << K.getColour();
				std::cout << "\nBirthday: " << K.getBirthday();
				std::cout << "\nVaccine Status: " << K.getVaccineStatus();
			}
		}
	}
	else if (type == "species"){
		for (Species S : Animals) {
			if (S.getSpecies() == NorS){
				Species L = S;
				std::cout <<"\nName:" << L.getName();
				std::cout << "\nSpecies: " << L.getSpecies();
				std::cout << "\nGender:" << L.getGender();
				std::cout <<"\nSpayed: " << L.isSpayed();
				std::cout << "\nBreed: " << L.getBreed();
				std::cout << "\nColour: " << L.getColour();
				std::cout << "\nBirthday: " << L.getBirthday();
				std::cout << "\nVaccine Status: " << L.getVaccineStatus();
			}
		}
	}
	
}

bool sortAnimal (Species a1, Species a2){
	return a1.getSpecies()<a2.getSpecies();
}

void displayBySpecies(){
	std::sort (Animals.begin(), Animals.end(), sortAnimal);
	std::string currentspecies;
	for (Species S : Animals){
		if (S.getSpecies() != currentspecies){
			currentspecies = S.getSpecies();
			std::cout << "\n" << currentspecies;
		}
		std::cout << "\n" << S.getName() << ": " << S.getColour() << " "<< S.getGender() << " "<< S.getBreed();
	}
}

void threeOldest(){

}

int main (void){
	int i;
	std::cout << "\nWhat do you want to do?\n1 - Add an animal\n2 - Remove an animal\n3 - Display animals by species\n4 - Show 3 oldest animals of each species\n";
	std::cin >> i;
	if (i == 1){
		addAnimal();
	}
	else if (i == 2){
		ID id;
		int n;
		int num;
		std::cout << "\nIs the animal 1 - Barcode, 2 - Microchipped (Enter 1 or 2)";
		std::cin >> n;
		if (n == 1){
			id.type = "Bar Code";
		}
		else if (n == 2){
			id.type = "Micro-Chip";
		}
		std::cout<<"Enter the id number: ";
		std::cin>> num;
		id.idNumber = num;
		removeAnimal(id);
	}
	else if (i == 3){
		displayBySpecies();
	}
	else if (i == 4){
		
	}

}
