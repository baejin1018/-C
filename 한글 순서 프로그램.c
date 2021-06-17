#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
// 알려주기 ㄱ을 입력하면 ㄱ그리는 순서대로 그려준다.
int n = 0;
void output(int a);

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}



int arr[14][64] = {
	{
		0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,0,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0
	},
	{
		0,0,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,1,1,1,1,1,0,
		0,0,0,0,0,0,0,0
	},
	{
		0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,1,1,1,1,0,0,
		0,0,0,0,0,0,0,0
	},
	{
		0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,1,0,
		0,0,0,0,0,0,1,0,
		0,1,1,1,1,1,1,0,
		0,1,0,0,0,0,0,0,
		0,1,1,1,1,1,1,0,
		0,0,0,0,0,0,0,0
	},	
	{
		0,0,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0
	},
	{
		0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,1,0,
		0,1,0,0,0,0,1,0,
		0,1,0,0,0,0,1,0,
		0,1,0,0,0,0,1,0,
		0,1,0,0,0,0,1,0,
		0,0,0,0,0,0,0,0
	},
	{
		0,1,1,1,1,1,1,0
	},
	{
		0,0,0,0,0,0,0,0,
		0,1,0,0,0,0,1,0,
		0,1,0,0,0,0,1,0,
		0,1,1,1,1,1,1,0,
		0,1,0,0,0,0,1,0,
		0,1,1,1,1,1,1,0,
		0,0,0,0,0,0,0,0
	},	
	{
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,1,0,0,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,1,0,
		0,0,0,0,0,0,0,1,
		0,0,0,0,0,0,0,0
	},
	
};

int findChar(char ja[]) 
{
	if (strcmp(ja, "ㄱ") == 0)
	{
		return 0;
	}
	else if (strcmp(ja, "ㄴ") == 0) 
	{
		return 1;
	}
	else if (strcmp(ja, "ㄷ") == 0)
	{
		return 2;
	}
	else if (strcmp(ja, "ㄹ") == 0)
	{
		return 3;
	}
	else if (strcmp(ja, "ㅁ") == 0)
	{
		return 4;
	}
	else if (strcmp(ja, "ㅅ") == 0)
	{
		return 5;
	}
}

int main()
{
	char ja[5];
	int count=0;
	CursorView();
	while (1)
	{
		printf("그리는 순서를 알고싶은 자음 :  ");
		scanf("%s", ja);
		int a=findChar(ja);
		output(a);
		Sleep(2000);
		//system("cls");
	}
}

void output(int a)
{
	int count = 0;
	if (a < 4)
	{
		for (int i = 0; i < 64; i++)
		{

			if (arr[a][i] == 1)
			{
				printf("■");
				Sleep(100);
			}
			else {
				printf("  ");
			}
			count++;
			if (count == 8)
			{
				count = 0;
				printf("\n");
			}
		}
	}
	else if (a >= 4)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int i = 0; i < 64; i++)
			{
				if (arr[j+4][i] == 1)
				{
					printf("■");
					Sleep(100);
				}
				else
				{
					printf("  ");
				}
				count++;
				if (count == 8)
				{
					count = 0;
					printf("\n");
				}

			}
			if (j == 0&&a==4)
			{
				gotoxy(2,1);
			}
			else if(j==1&&a==4)
 			{
				gotoxy(0,7);
			}
			
		}
	}
}
