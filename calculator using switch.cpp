#include<iostream>
using namespace std;
int Calculator(int x, int y, char ch)
{
	switch (ch){
	case '+':
		return(x+y);
		break;

	case '-':
		return(x-y);
		break;

	case'*':
		return(x*y);
		break;

	case'/':
		return(x/y);
		break;
	}

}
int main()
{
	int a,b;
	char ch;
	int answer;
	cout << "enter First Number:" << endl;
	cin >> a;
	cout << "enter Second Number:" << endl;
	cin >> b;
	cout << "Enter the sign:" << endl;
	cin >> ch;
	answer = Calculator(a,b,ch);
	cout << "Answer is: " << answer;

}
