/* FILE NAME: Practice2_7.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To practice with cycles 
*/
#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	/* declorating variables */
	int x, y, n, sum = 0, x_c, y_c;
	double x1, y1;

	/* Input amount of shots */
	std::cout << "How many times do you want to shoot?\n";
	std::cin >> n;

	srand(time(0));

	/* initializing aim center */
	x_c = rand() % 50 - 25;
	y_c = rand() % 50 - 25;

	for (int i = 0; i < n; i++)
	{
		/* input shooting coordinates */
		std::cout << "x y = ";
		std::cin >> x >> y;

		/* generating shot accuracy */
		x1 = x + ((rand() % 11) - 5) / 10.0;
		y1 = y + ((rand() % 11) - 5) / 10.0;

		/* counting points */
		if ((x1 - x_c) * (x1 - x_c) + (y1 - y_c) * (y1 - y_c) < 1)
			sum += 10;
		else if (((x1 - x_c) * (x1 - x_c) + (y1 - y_c) * (y1 - y_c) > 1) && ((x1 - x_c) * (x1 - x_c) + (y1 - y_c) * (y1 - y_c) < sqrt(2)))
			sum += 5;
	}

	/* Output results */
	std::cout << "Your score is: " << sum << std::endl;
	
	/* Output your level of shooting */
	if (sum == 0)
		std::cout << "You are beginer";
	else if ((sum > 0) && (sum <= n * 5))
		std::cout << "You are good at shooting";
	else
		std::cout << "You are master";

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}