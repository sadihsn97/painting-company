#include <iostram>
// Use the ceil function
#include <cmath>

using namespace std;

int main() {
	// start with some introduction messages
	cout << "Welcome to BEST painting company.";	

	// prompts the user to enter the number of rooms
	cout << "Enter the number of rooms: ";
	cin >> num;

	// prompts the user to enter the square metre of wall space
	cout << "enter the square metre of wall space: ";
	cin >> square;

	// displays the following choices of paint for user to choose
	cout << "Brand" << \t << "Cost per 5 litres" << endl
		 << "A    " << \t << "RM75" << endl
		 << "B    " << \t << "RM100" << endl
		 << "C    " << \t << "RM120" << endl
	cout << endl << "The brand you choose is: ";
	cin >> brand;

	// display 
	// The number of litre of paint required
	

	// The cost of the paint 
	// The hours of labor required
	// The labor charges
	// The total cost of the paint job

	//input validation

	// functions
	// get the number of room
	int getNumOfRoom() {
		int num;
		cout << "Enter the number of the rooms: ";
		cin num;
		return num;
	}

    // get the wall space of each room and calculate the total wall space in square metre
	double getTotalSpace(int num) {
		double totalSpace;

		// prompts the user to enter the square metre of wall space
		for (int a = 1; a <= num; a++) {
			cout << "enter the square metre of wall space for room#" << a << ": ";
			cin >> square;
			totalSpace += square;
		}

		return totalSpace;
	}
	
    // calculate the cost of the paint
	int getCost(int price, litre

    // calculate the labour hours and labour charges
    // display the breakdown of the cost and the total cost


	return 0;
}
