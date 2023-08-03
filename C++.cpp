#include <iostream>
#include <string>

using namespace std;

// choice 1
void Calculator() {
	cout << endl;
	cout << "========== Calculator ==========" << endl;
	int number1,number2;
	char op;
		cout << "Input your Numbers : ";
		cin >> number1 >> op >> number2;
			switch (op) {
			case '+': {
				cout << "Result Is : " << number1 + number2;
				break;
			}
			case '-': {
				cout << "Result Is : " << number1 - number2;
				break;
			}
			case '*': {
				cout << "Result Is : " << number1 * number2;
				break;
			}
			case '/': {
				cout << "Result Is : " << number1 / number2;
				break;
			}
		}
			cout << endl;
};

//choice 2
void Multiplication() {
	cout << endl << "========== Multiply ==========" << endl;
	int Mnumber;
	cout << "Enter Your Number: ",cin >> Mnumber;
	for (int i = 1; i <= 12; i++) {
		cout << Mnumber << " * " << i << " = " << Mnumber * i << endl;
	}
};

//Choice 3
void GradeCal() {
	cout << endl << "========== Grade Calculator ==========" << endl;
	char Grade[] = {'A','B','C','D','F'};
	int myPoint;
	cout << "Enter Your Points : " ,cin >> myPoint;
	if (myPoint >= 81 && myPoint <= 100) {
		cout << "Your Grade Is : " << Grade[0] << endl;
	}
	else if (myPoint >= 61 && myPoint <= 80) {
		cout << "Your Grade Is : " << Grade[1] << endl;
	}
	else if (myPoint >= 51 && myPoint <= 60) {
		cout << "Your Grade Is : " << Grade[2] << endl;
	}
	else if (myPoint >= 31 && myPoint <= 50) {
		cout << "Your Grade Is : " << Grade[3] << endl;
	}
	else if (myPoint >= 0 && myPoint <= 30) {
		cout << "Your Grade Is : " << Grade[4] << endl;
	}
	else {
		cout << "Error!!" << endl;
	}
}

// choice 4
void PrimeNumber() {
	cout << endl << "========== Prime Numbers ==========" << endl;
	int num;
	cout << "Input Your Length Number: ";
	cin >> num;
	int i, j;
	cout << endl << "========== Result ==========" << endl;
	for (i = 1; i <= num; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			cout << i << " Is Prime Number" << endl;
		}
	}
}

//mainmenu
void mainmenu() {
	int UserInput = 0;
	cout << endl;
	cout << "========== Main Menu ==========" << endl;
	cout << "Please Select Menu 1-4" << endl;
	cout << "1.Calculator" << endl;
	cout << "2.Multiplication" << endl;
	cout << "3.Grade Cal" << endl;
	cout << "4.Prime Number" << endl;
	cout << "5.Exit" << endl;
	cout << "Your Select Is : " ;
	cin >> UserInput;
	while (true) {
		switch (UserInput) {
			case 1: {
				Calculator();
				mainmenu();
			}
			case 2: {
				Multiplication();
				mainmenu();
				break;
			}
			case 3: {
				GradeCal();
				mainmenu();
				break;
			}
			case 4: {
				PrimeNumber();
				mainmenu();
				break;
			}
			case 5: {
				break;
			}
		}
		break;
	}
};

//main function and login
int main() {
	string UserAuth[3];
	string UserRegistered[3];
	string NameInput[] = {"Name" , "Username" , "Password"};
	char choice;
	int count = sizeof(UserAuth) / sizeof(UserAuth[0]);
	//register
	cout << "========== Register ==========" << endl;
		for (int i = 0;i < count;i++) {
			cout << "Input your " << NameInput[i] << " : ";
			cin >> UserAuth[i];
		}


	//login
	while (true){
		cout << endl;
		cout << "========== Login ==========";
		cout << endl;
		for (int j = 1; j < count;j++) {
			cout << "Enter Your " << NameInput[j] << " = ";
			cin >> UserRegistered[j];
		}
		if (UserRegistered[1] == UserAuth[1] && UserRegistered[2] == UserAuth[2]) {
			//Login Success
			cout << endl;
			cout << "========== Welcome " << UserAuth[0] << " ==========" << endl;
			mainmenu();
			break;
		}
		else if(UserRegistered[1] != UserAuth[1] || UserRegistered[2] != UserAuth[2]) {
			//Login Fail
			cout << "Wrong Please TryAgain!!" << endl;
			cout << "Do You Want to TryAgain? Y/N: ";
			cin >> choice;
			if (choice == 'y' || choice == 'Y') {
				//Try Again
				continue;
			}
			else if (choice == 'n' || choice == 'N') {
				//end program
				cout << "End Program" << endl;
				break;
			}
		}
	}
	return 0;
}
