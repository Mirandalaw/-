//#include<iostream>
//#include<time.h>
//#define MAX 10
//using namespace std;
//
//int main()
//{
//	int F_array[MAX];
//	int S_array[MAX];
//	srand((unsigned)time(NULL));
//	int similar_percent = 0;
//	for (int col = 0; col < 10; ++col)
//	{
//		F_array[col] = rand() % 10;
//		S_array[col] = rand() % 10;
//		if (F_array[col] == S_array[col])similar_percent++;
//	}
//	cout << "첫번째 배열";
//	for (int col = 0; col < 10; ++col)
//	{
//		cout << F_array[col]<<" ";
//	}
//	cout << endl;
//	cout << "두번째 배열";
//	for (int col = 0; col < 10; ++col)
//	{
//		cout << S_array[col] << " ";
//	}
//	cout << endl;
//	cout <<"닮은 비율 :"<< similar_percent * 10;
//	return 0;
//}
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

void print(int array[])
{
	for (int col = 0; col < 10; ++col)cout << array[col];
	cout << endl;
}
int main()
{
	srand((unsigned)time(NULL));
	int array[10] = { 0 };
	while (1)
	{
		int random_position = rand() % 10;
		array[random_position] = 1;
		print(array);
		Sleep(500);
		array[random_position] = 0;
		system("cls");
	}
	return 0;
	
}