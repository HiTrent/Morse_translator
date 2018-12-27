#include <string>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void sound(bool dot, int n)
{
	if(dot) for(int i = 0; i < n; i++)
	{
		mciSendString("play Dot.mp3 wait", NULL, 0, NULL);
		mciSendString("close Dot.mp3", NULL, 0, NULL);
	}

	
	else for(int i = 0; i < n; i++)
	{
		mciSendString("play Dash.mp3 wait", NULL, 0, NULL);
		mciSendString("close Dash.mp3", NULL, 0, NULL);
	}
}

int main()
{
	bool exit = false;
	while(!exit)
	{
		cout << "Enter text:" << "\n";
		string text; getline(cin, text);

		cout << "\n\n" << "Morse code:" << "\n";
		for (size_t i = 0; i < text.size(); i++)
		{
			text[i] = toupper(text[i]);
			switch (text[i])
			{
				case 'A':
				{
					cout << ".- ";
					sound(true, 1);
					sound(false, 1);
				}
				break;

				case 'B':
				{
					cout << "-... ";
					sound(false, 1);
					sound(true, 3);
				}
				break;

				case 'C':
				{
					cout << "-.-. ";
					sound(false, 1);
					sound(true, 1);
					sound(false, 1);
					sound(true, 1);
				}
				break;

				case 'D':
				{
					cout << "-.. ";
					sound(false, 1);
					sound(true, 2);
				}
				break;

				case 'E':
				{
					cout << ". ";
					sound(true, 1);
				}
				break;

				case 'F':
				{
					cout << "..-. ";
					sound(true, 2);
					sound(false, 1);
					sound(true, 1);
				}
				break;

				case 'G':
				{
					cout << "--. ";
					sound(false, 2);
					sound(true, 1);
				}
				break;

				case 'H':
				{
					cout << ".... ";
					sound(true, 4);
				}
				break;

				case 'I':
				{
					cout << ".. ";
					sound(true, 2);
				}
				break;

				case 'J':
				{
					cout << ".--- ";
					sound(true, 1);
					sound(false, 3);
				}
				break;

				case 'K':
				{
					cout << "-.- ";
					sound(false, 1);
					sound(true, 1);
					sound(false, 1);
				}
				break;

				case 'L':
				{
					cout << ".-.. ";
					sound(true, 1);
					sound(false, 1);
					sound(true, 2);
				}
				break;

				case 'M':
				{
					cout << "-- ";
					sound(false, 2);
				}
				break;

				case 'N':
				{
					cout << "-. ";
					sound(false, 1);
					sound(true, 1);
				}
				break;

				case 'O':
				{
					cout << "--- ";
					sound(false, 3);
				}
				break;

				case 'P':
				{
					cout << ".--. ";
					sound(true, 1);
					sound(false, 2);
					sound(true, 1);
				}
				break;

				case 'Q':
				{
					cout << "--.- ";
					sound(false, 2);
					sound(true, 1);
					sound(false, 1);
				}
				break;

				case 'R':
				{
					cout << ".-. ";
					sound(true, 1);
					sound(false, 1);
					sound(true, 1);
				}
				break;

				case 'S':
				{
					cout << "... ";
					sound(true, 3);
				}
				break;

				case 'T':
				{
					cout << "- ";
					sound(false, 1);
				}
				break;

				case 'U':
				{
					cout << "..- ";
					sound(true, 2);
					sound(false, 1);
				}
				break;

				case 'V':
				{
					cout << "...- ";
					sound(true, 3);
					sound(false, 1);
				}
				break;

				case 'W':
				{
					cout << ".-- ";
					sound(true, 1);
					sound(false, 2);
				}
				break;

				case 'X':
				{
					cout << "-..- ";
					sound(false, 1);
					sound(true, 2);
					sound(false, 1);
				}
				break;

				case 'Y':
				{
					cout << "-.-- ";
					sound(false, 1);
					sound(true, 1);
					sound(false, 2);
				}
				break;

				case 'Z':
				{
					cout << "--.. ";
					sound(false, 2);
					sound(true, 2);
				}
				break;

				case '0':
				{
					cout << "----- ";
					sound(false, 5);
				}
				break;

				case '1':
				{
					cout << ".---- ";
					sound(true, 1);
					sound(false, 4);
				}
				break;

				case '2':
				{
					cout << "..--- ";
					sound(true, 2);
					sound(false, 3);
				}
				break;

				case '3':
				{
					cout << "...-- ";
					sound(true, 3);
					sound(false, 2);
				}
				break;

				case '4':
				{
					cout << "....- ";
					sound(true, 4);
					sound(false, 1);
				}
				break;

				case '5':
				{
					cout << "..... ";
					sound(true, 5);
				}
				break;

				case '6':
				{
					cout << "-.... ";
					sound(false, 1);
					sound(true, 4);
				}
				break;

				case '7':
				{
					cout << "--... ";
					sound(false, 2);
					sound(true, 3);
				}
				break;

				case '8':
				{
					cout << "---.. ";
					sound(false, 3);
					sound(true, 2);
				}
				break;

				case '9':
				{
					cout << "----. ";
					sound(false, 4);
					sound(true, 1);
				}
				break;
				
				case '.':
				{
					cout << "......";
					sound(true, 6);
				}
				break;

				case ',':
				{
					cout << ".-.-.-";
					sound(true, 1);
					sound(false, 1);
					sound(true, 1);
					sound(false, 1);
					sound(true, 1);
					sound(false, 1);
				}
				break;

				case ':':
				{
					cout << "---...";
					sound(false, 3);
					sound(true, 3);
				}
				break;

				case ';':
				{
					cout << "-.-.-.";
					sound(false, 1);
					sound(true, 1);
					sound(false, 1);
					sound(true, 1);
					sound(false, 1);
					sound(true, 1);
				}
				break;

				case '\'':
				{
					cout << ".----.";
					sound(true, 1);
					sound(false, 4);
					sound(true, 1);
				}
				break;

				case '?':
				{
					cout << "..--..";
					sound(true, 2);
					sound(false, 2);
					sound(true, 2);
				}
				break;

				case '!':
				{
					cout << "--..--";
					sound(false, 2);
					sound(true, 2);
					sound(false, 2);
				}
				break;

				case ' ':
				{
					cout << "\n";
					Sleep(1000);
				}
			}
		}

		cout << "\n\n";
		system("pause");
		system("cls");
	}
}