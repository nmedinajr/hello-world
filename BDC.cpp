#include<iostream>
using namespace std;


//function prototype
int btd(int, int);

int main(){
	int binary;
	int decimal;

	//user enters binary number
	cout << "Please enter a binary number." << endl;
	cin >> binary;

	//input binary number into function converter
	decimal = btd(binary, 0);
	//display decimal to user
	cout << binary << " converted to decimal is " << decimal << endl;

	system("pause");
		return 0;
}

//btd function takes in a binary number and converts it into a decimal value
int btd(int binary, int pos){
	int binarydigit = binary % 10;
	int newbinary = binary / 10;

	if (binary == 0)
		return 0;
	else if (binarydigit == 0 || binarydigit == 1){
		int sum = 0;
		sum += binarydigit * pow(2,pos);
		sum += btd(newbinary, pos + 1);
		return sum;
	}
	else{
		cout << "That is not a binary number." << endl;
		system("pause");
			exit(0);
	}
}