#include <iostream>
using namespace std;

int main() {
	int grade;
	//input validation loop 
	do{
		cout<<"Enter your grade (0-100):";
		cin>> grade;
		if(grade < 0|| grade>100) {
			cout << "invalid input. please enter a grade between 0 and 100";
		}
	}while (grade < 0|| grade > 100);
	
	//output the valid grade 
	cout << "You entered a valid grade: "<<grade << endl;
	return 0;
}