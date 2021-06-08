#include<stdio.h>
#include<Windows.h>
#define COLOR(A) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),A);


void mapprint();
void xy();
int x = 15, y = 15;

int main()
{
	xy();
	mapprint();
	return 0;
}

void mapprint()
{
	int map[32][32] = { 0, };
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (map[i][j] == 0) 
			{
				COLOR(240);
				printf("  ");
			}
		}
		printf("\n");
	}
}

void xy()
{
	int key;
	if (_kbhit()) 
	{
		key = _getch();
		switch (key)
		{
		case 72:
			y--;
			break;
		case 80:
			y++;
			break;
		case 75:
			x--;
			break;
		case 77:
			x++;
			break;
		default:
			break;
		}
	}
}