#include<iostream>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void main()
{
	int array[10];
	srand((unsigned)time(NULL));
	int key;
	int temp = 0;

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10;
		cout << array[i] << " ";
	}
	cout << endl;
	while (1)
	{
		key = _getch();

		if (key == 32 || key == 0)
		{
			key = _getch();
			switch (key)
			{
			case 32: //스페이스바

				
				for (int i = 0; i < 10; i++)
				{   
					int supple1 = rand() % 10;
					temp = array[i];
					array[i] = array[supple1];
					array[supple1] = temp;
				}
				for (int i = 0; i < 10; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;
			}

		}
	}
}