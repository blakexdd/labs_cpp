/* FILE NAME: Practice6_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn how to work with files
*/
#include <iostream>
#include <string>
#include <fstream>

/* Printing some text in file.
* ARGUMENTS:
*   - string of text:
*      char * s;
* RETURNS:
*   None.
*/
void printf(std::string s);

int main(void)
{
	/* initializing variables */
	double sum = 0;
	int const n = 100;
	double nums[n];

	/* filid array with random numbers */
	for (int i = 0; i < n; i++)
		nums[i] = (rand() % 100);

	/* creating file */
	std::ofstream out("test.txt", std::ios::out || std::ios::binary);

	/* checking for file to create */
	if (!out)
	{
		std::cout << "Error creating file\n";
		return 1;
	}

	/* write array to file */
	out.write((char *)nums, sizeof(nums));

	/* closing file */
	out.close();

	/* open file */
	std::ifstream in("test.txt", std::ios::in | std::ios::binary);

	/* checking for file to open */
	if (!in)
	{
		std::cout << "Error openning file";
		return 1;
	}

	/* readiing info from file */
	in.read((char *)nums, sizeof(nums));

	/* finding sum and printing result */
	int k = sizeof(nums) / sizeof(double);

	for (int i = 0; i < k; i++)
	{
		sum += nums[i];
		std::cout << nums[i] << ' ';
	}
	std::cout << "\nsum= " << sum << std::endl;

	/* closing file */
	in.close();

	/* initializing string */
	std::string s;

	/* reading info from console and writing it to file */
	std::cout << "Input string:\n";
	while (std::getline(std::cin, s))
	{
		if (s.empty())
			break;
		printf(s);
	}

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}

/* Printing some text in file.
* ARGUMENTS:
*   - string of text:
*      char * s;
* RETURNS:
*   None.
*/
void printf(std::string s)
{
	/* opening outout file for appending */
	std::ofstream file("out1.txt", std::ios::app);

	/* writing info to file */
	file << s << '\n';
	//file.write(s.c_str(), s.size());

	/* closing file */
	file.close();
}

