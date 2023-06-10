#include <iostream>
using std::string;

class AbstactEmployee {
	virtual void AskForPromotion()=0; // abstract function, have to provide  
};

//signed this contract
class Employee:AbstactEmployee {
private: // encapsulation is to make properties private and use getters and setters to access them;
	string Name;
	string University;
	int Year_of_graduation;
public:

	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setUniversity(string university) {
		University = university;
	}
	string getUniversity() {
		return University;
	}
	void setYear_of_graduation(int year_of_graduation) {
		if( year_of_graduation >= 1900) // validation rules
		Year_of_graduation = year_of_graduation;
	}
	int getYear_of_graduation() {
		return Year_of_graduation;
	}


	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Graduated from - " << University << std::endl;
		std::cout << "Year of graduation - " << Year_of_graduation << std::endl;
	}
	Employee(string name, string university, int year_of_graduation) {
		Name = name;
		University = university;
		Year_of_graduation = year_of_graduation;
	}

	void AskForPromotion() {
		if (Year_of_graduation < 2020)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry No promotion for you!" << std::endl;

	}

};

int main()
{
	//Employee employee1;
	//employee1.Name = "Jingjing";
	//employee1.University = "Western University";
	//employee1.Year_of_graduation = 2019;
	Employee employee1 = Employee("Jingjing", "Western University", 2019);
	//employee1.IntroduceYourself();

	Employee employee2 = Employee("Jenny", "University of Alberta", 2021);

	int section = 2;
	// section for getter and setters
	if (section == 1)
	{
		employee2.IntroduceYourself();
		employee2.setYear_of_graduation(1023);
		std::cout << employee2.getName() << " is graduated in " << employee2.getYear_of_graduation() << std::endl;
		employee2.IntroduceYourself();

	}


	// section for abstraction

	employee1.AskForPromotion();
	employee2.AskForPromotion();









}


