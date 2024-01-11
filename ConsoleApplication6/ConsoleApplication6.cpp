#include<iostream>
#include<ctime>
#include<string>
using namespace std;
void merging(int arr1[5], int arr2[7], int arr3[12])
{
	cout << "Merged Array is: { ";
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 5; i < 12; i++)
	{
		int j = 0;
		arr3[i] = arr2[i - 5];
	}
	for (int i = 0; i < 12; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << "}" << endl;
}

void sorting(int arr[])
{

	for (int i = 0; i < 12; i++)
	{
		int temp;
		for (int j = 0; j < 12; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "The Sorted Array is: { ";
	for (int i = 0; i < 12; i++)
	{
		cout << arr[i + 1] << " ";
	}
	cout << "}" << endl;


}
void Common(int a[5], int b[7])
{
	cout << "Common Elements: { ";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if (a[i] == b[j]) {
				cout << a[i] << " ";
				break;
			}
		}
	}
	cout << "}" << endl;
}
bool isPalindrome(string str1)
{

	int size = str1.length();
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (str1[j++] != str1[size--])
		{
			return false;
		}

	}
	return true;

}
int main()
{
	srand(time(0));
	int arr1[5];
	int arr2[7];
	int sorted[12];
	cout << "First Array is: { ";
	for (int i = 0; i < 5; i++)
	{
		arr1[i] = rand() % 89 + 10;
		cout << arr1[i] << " ";
	}
	cout << "}" << endl;
	cout << "Second Array is: { ";
	for (int i = 0; i < 7; i++)
	{
		arr2[i] = rand() % 89 + 10;
		cout << arr2[i] << " ";
	}
	cout << "}" << endl;

	//Merged Array

	merging(arr1, arr2, sorted);

	//Sorted Array
	sorting(sorted);

	//Common Numbers
	Common(arr1, arr2);

	//Palindrome
	string str1;
	cout << "Enter the string :";
	getline(cin, str1);
	if (isPalindrome(str1) == 1)
	{
		cout << "No";
	}
	else
	{
		cout << "Yes";
	}
	cout << endl;
	system("pause");
	return 0;
}