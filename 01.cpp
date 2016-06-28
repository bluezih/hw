
#include <iostream>
using namespace std;

int main() 
{
	int Fahrenheit;
	int Celsius;
	cout << "快輸入華氏溫度";
	cin >> Fahrenheit;
	Celsius = (Fahrenheit-32)*5/9;
	cout << "攝氏溫度" << Celsius << endl;
	system ("pause");
	return 0;

}