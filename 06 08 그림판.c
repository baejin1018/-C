#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#define COLOR(A) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),A);

void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int clss()
{
	COORD pos = { 0, 0 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void mapprint();
void xy();
int x = 15, y = 15;
int di = 0;

int main()
{
	int map[32][32] = { 0, };
	int map2[32][32] = { 0, };
	while (1) {
		Sleep(50);
		clss();
		CursorView();
		map2[y][x] = 0;
		xy(map);
		map2[y][x] = 1;
		mapprint(map, map2);
	}
	return 0;
}

void mapprint(int map[32][32], int map2[32][32])
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (map2[i][j] == 1)
			{
				COLOR(240);
				printf("♠");
				COLOR(0);
			}
			else if (map[i][j] == 0) 
			{
				COLOR(240);
				printf("  ");
				COLOR(0);
			}
			else if (map[i][j] == 1)
			{
				COLOR(0);
				printf("  ");
			}
		}
		printf("\n");
	}

	system("mode con cols=64 lines=40");
}

void xy(int map[32][32])
{
	int key;
	if (_kbhit())
	{
		key = _getch();
		switch (key)
		{
		case 72:
			//di = 1;
			y--;
			break;
		case 80:
			//di = 2;
			y++;
			break;
		case 75:
			//di = 3;
			x--;
			break;
		case 77:
			//di = 4;
			x++;
			break;
		case 13:
			map[y][x] = 1;
			break;
		default:
			break;
		}
	}
	/*else
		di = 0;

	if (di == 1) 
		y--;
	else if (di == 2) 
		y++;
	else if (di == 3) 
		x--;
	else if (di == 4) 
		x++;*/
}