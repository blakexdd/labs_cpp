/* FILE NAME: Practice2_5.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To compare types of cycles
*/
#include <iostream>

int main(void)
{
	int a, b, temp;

	/* input values */
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	/* finding nod of two numbers */
	temp = a;
	do
	{
		if (temp != b)
		{
			a = temp;
			if (a < b)
			{
				temp = a;
				a = b;
				b = temp;
			}
			temp = a - b;
			a = b;
		}
	} while (temp != b);

	std::cout << "NOD = " << b << std::endl;

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}