#include<iostream>
using namespace std;

//function prototype
int GCD(int, int);

int main(){
	int v1;
	int v2;
	int gcdv;

	cout << "Enter two positive integers. " << endl;
	cin >> v1 >> v2;
	gcdv = GCD(v1, v2);
	cout << "The greatest common denominator of " << v1 << " and " << v2 << " is " << gcdv << endl;
	system("pause");
	return 0;
}
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else{
		return GCD(b, a%b);
	}
}