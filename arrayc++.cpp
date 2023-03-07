#include<iostream>
int main()
{
	int arr[50];
	int n;
	int i;
	int min;
	std::cout << "enter number of array elements:" << std::endl;
	std::cin >> n;
	for (i = 0; i <= n; i++)
	{
		std::cin >> arr[i];
	}
	min = arr[0];
	for (i = 0; i <= n; i++)
	{
		if (arr[i] < arr[0])
		{
			min = arr[i];
		}
	}
	std::cout << "mimimum array element is:" << min << std::endl;
}