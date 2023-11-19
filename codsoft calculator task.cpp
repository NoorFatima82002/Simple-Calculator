#include <iostream>
using namespace std;

int main() {
    char option;
    char option1;
    float num1, num2;
    cout<<endl;
    	// Welcome message and  title
    cout << "\t\t\t\t\t****************************************************"  <<endl<<endl;
    cout << "\t\t\t\t\t\t\tSIMPLE CALCULATOR  " <<endl<<endl;
    cout << "\t\t\t\t\t****************************************************"  <<endl;
    cout << endl << endl;
    
	do {
    	 // Prompt user to choose an operation
        cout << "\t\t\t\tChoose Any Basic Operation From Below For Calculation:" << endl;
        cout << "\t\t\t\tEnter operator: +, -, *, /: ";
        cin >> option1; // user enters any operator for further operations
        cout << endl;
        cout << "\t\t\t\t*********************************" <<endl;
        cout << "\t\t\t\tEnter operand 1: ";
        cin >> num1;
        cout<<endl;
        cout << "\t\t\t\tEnter operand 2: ";
        cin >> num2;
        cout << endl;
        cout << "\t\t\t\t*********************************" <<endl;
        cout<<endl;
// Display the result of the operation based on the chosen operator
        cout << "\t\t\t\tResult displayed: ";
        switch (option1) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                } else {
                    cout << "Error! Division by zero is not allowed.";
                }
                break;
            default:
                // If the operator is other than +, -, * or /, an error message is shown
                cout << "Error! Operator is not correct" << endl;
                break;
        }
        cout<<endl<<endl;
        cout << "\t\t\t\t*********************************" ;
        cout << endl << endl;
        cout << "\t\t\t\tDo you want to continue? (y/n): ";
        cin >> option;
        cout << endl;

    } while (option == 'y' || option == 'Y');

      cout<<endl<<endl;
      cout << "\t\t\t\t*********************************" ;
      cout <<endl<<endl<< "\t\t\tThanks for visiting!" << endl;
      cout<<endl<<endl;
      cout << "\t\t\t\t*********************************" ;
    return 0;
}
//code by Noor Fatima
//For Internship Task Simple calculator
//For @codsoft

