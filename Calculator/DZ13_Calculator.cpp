//Calculator
#include <iostream>
using namespace std;

int main()
{
	float A, B, RES;
	float *pA = &A;
	float *pB = &B;
	float *pRES = &RES;
	char key, key1; char *pkey = &key; char *pkey1 = &key1;

	for (;;)
	{
		cout << "Input the first digit:\n";
		cin >> A;
		cout << "Input the second digit:\n";
		cin >> B;

		cout << "\nSelect operator:\n";
		cout << "+ Input to get SUM.\n";
		cout << "- Input to get DIFFERENCE.\n";
		cout << "* Input to get PRODUCT.\n";
		cout << "/ Input to get QUOTIENT.\n";
		cout << "^ Input to get RAISE A IN POWER B.\n";

		cin >> key;
		if (*pkey == '+') {
			*pRES = *pA + *pB;
			cout << "\n" << *pA << " + " << *pB << " = " << *pRES << "\n";
		}
		else if (*pkey == '-') {
			*pRES = *pA - *pB;
			cout << "\n" << *pA << " - " << *pB << " = " << *pRES << "\n";
		}
		else if (*pkey == '*') {
			*pRES = *pA*(*pB);
			cout << "\n" << *pA << " x " << *pB << " = " << *pRES << "\n";
		}
		else if (*pkey == '^') {
			*pRES = *pA;
			for (int i = 1; i<B; i++)
				*pRES *= (*pA);
			cout << "\n" << *pA << " in power of " << *pB << " = " << *pRES << "\n";
		}
		else if (*pkey == '/') {
			if (*pB != 0) {
				*pRES = *pA / (*pB);
				cout << "\n" << *pA << " / " << *pB << " = " << *pRES << "\n";
			}
			else {
				cout << "\nError! Divide by null!\n";
			}
		}
		else {
			cout << "\nError! Input correct operator!\n";
		}

		cout << "Would you like to calculate more?\n";
		cout << "Input \"y\" if you wish to continue:\n";
		cout << "Input \"n\" if you wish to stop:\n";
		cin >> key1;
		if (*pkey1 == 'y') continue;
		if (*pkey1 == 'n') break;
	}
	cout << "\nThank you!\n";
	return 0;
}