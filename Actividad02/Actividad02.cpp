#include<iostream>
using namespace std;
const int NUM = 8;
int main()
{
	int nums[NUM];
	int total;
	for (int i = 0;i < NUM;i++)
	{
		cout << "Por favor, introduzca el número";
		cin >> nums[i];
		total += nums[i];
	}
	cout << "El total de números es" << total << endl;
	system("pause");

