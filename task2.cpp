#include <iostream>
using namespace std;
int main()
{
	char OP;
	float num1, num2;
	cin >> OP;
	cin >> num1 >> num2;
	switch (OP)
	{	
		case '+':
			cout << num1 + num2;
			break;
		
		case '-':
			cout << num1 - num2;
			break;
		
		case '*':
			cout << num1 * num2;
			break;
		
		case '/':
			cout << num1 / num2;
			break;

		default:
			cout << "Error! operator is not correct";
			
	}
	return 0;
}