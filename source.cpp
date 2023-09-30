#define _CRT_SECURE_NO_WARNINGS 1
#include "total.h"
#include "Language.h"
#include "theme.h"
#include <iostream>
#include <math.h>
#include <stdbool.h>
#include <Windows.h>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
void WriteCode()
{

}
void ChineseV()
{
	IsChinese = true;
	ofstream f;
	f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", fstream::out);
	f << "Chinese";
	f.close();
	Language.assign("语言");
	LVS.assign("语言设置");
	TVS.assign("文本设置");
	themeSet.assign("主题设置");
	Math.assign("数学求解器");
	Set.assign("设置");
	quits.assign("退出");
	default_theme.assign("默认");
	Sea_theme.assign("海洋");
	Cash_theme.assign("高贵");
	RE_theme.assign("生化危机");
	Old_theme.assign("远古");
	Hack_theme.assign("黑客帝国");
	AAA_theme.assign("经典");
	UnknowType.assign("未知字符:");
	PleaseInputASubject.assign("请输入算式");
	PleaseInputANum.assign("请输入一个小于999999的整数\n");
	BeSureOfQuit.assign("确定退出?");
	LanguageA.assign("中文");
	LanguageB.assign("英文");
	LanguageC.assign("俄文");
	未知字符，主题将改为默认.assign("未知字符，主题将改为默认");
	Close.assign("关机中");
	Diff.assign("难度:");
	你获得了.assign("你获得了 ");
	分.assign(" 分");
	ErrorSub.assign("错题");
	TureSub.assign("对题");
	RandSub.assign("随机算式挑战");
	StrF.assign("因式分解");
	NormalSub.assign("普通算式");
	StrAbs.assign("绝对值");
	请选择难度.assign("请选择难度(1 - 4):");
	隐藏难度.assign("隐藏难度\n");
	正确，得分加.assign("正确，得分加");
	错误，次数减1.assign("错误，次数减1");
}
void EnglishV()
{
	IsChinese = false;
	ofstream f;
	f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", fstream::out);
	f << "English";
	f.close();
	Language.assign("Language");
	LVS.assign("Language Setting");
	TVS.assign("Text Setting");
	themeSet.assign("Theme Setting");
	Math.assign("Math");
	Set.assign("Settings");
	quits.assign("Quit");
	default_theme.assign("Default");
	Sea_theme.assign("Ocean");
	Cash_theme.assign("Royal");
	RE_theme.assign("Resident Evil");
	Old_theme.assign("Ancient");
	Hack_theme.assign("Hack");
	AAA_theme.assign("Classics");
	UnknowType.assign("Unknown characters:");
	PleaseInputASubject.assign("Please enter the formula");
	PleaseInputANum.assign("Please enter an integer less than 999999\n");
	BeSureOfQuit.assign("Are you sure you want to quit?");
	LanguageA.assign("Chinese");
	LanguageB.assign("English");
	LanguageC.assign("Russian");
	未知字符，主题将改为默认.assign("Unknown characters, the theme will be changed to default");
	Close.assign("Closing");
	Diff.assign("Difficulty:");
	你获得了.assign("You got ");
	分.assign(" points");
	ErrorSub.assign("Wrong question");
	TureSub.assign("Correct question");
	RandSub.assign("Stochastic challenge");
	StrF.assign("Factorization");
	NormalSub.assign("Normal calculations");
	StrAbs.assign("Absolute value");
	请选择难度.assign("Please select difficulty (1 - 4):");
	隐藏难度.assign("Hide difficulty\n");
	正确，得分加.assign("Correct, score plus ");
	错误，次数减1.assign("Error, the number of times minus 1");
}
void RussianV()
{
	ofstream f;
	f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", fstream::out);
	f << "Russian";
	f.close();
	Language.assign("Язык");
	LVS.assign("Языковые настройки");
	TVS.assign("Настройка текста");
	themeSet.assign("Настройка темы");
	Math.assign("Математике");
	Set.assign("Параметры");
	quits.assign("Покидать");
	default_theme.assign("По умолчанию");
	Sea_theme.assign("Океан");
	Cash_theme.assign("Королевский");
	RE_theme.assign("Обитель зла");
	Old_theme.assign("Древний");
	Hack_theme.assign("Рубить");
	AAA_theme.assign("Классика");
	UnknowType.assign("Неизвестные персонажи:");
	PleaseInputASubject.assign("Пожалуйста, введите формулу");
	PleaseInputANum.assign("Введите целое число меньше 999999\n");
	BeSureOfQuit.assign("Вы уверены, что хотите бросить курить");
	LanguageA.assign("Китайский");
	LanguageB.assign("Английский");
	LanguageC.assign("Русский");
	未知字符，主题将改为默认.assign("Неизвестные символы, тема будет изменена на стандартную");
	Close.assign("Закрытие");
	Diff.assign("Трудность:");
	你获得了.assign("У вас есть ");
	分.assign(" дробь");
	ErrorSub.assign("Неправильный вопрос");
	TureSub.assign("Правильный вопрос");
	RandSub.assign("Стохастический вызов");
	StrF.assign("факторизации");
	NormalSub.assign("Нормальные расчеты");
	StrAbs.assign("Абсолютная величина");
	请选择难度.assign("Пожалуйста, выберите сложность (1 - 4):");
	隐藏难度.assign("Скрыть сложность\n");
	正确，得分加.assign("Правильно, оценка плюс ");
	错误，次数减1.assign("Погрешность, количество раз минус 1");
}
void LanguageSet()
{
	LS:
	char c;
	fstream f;
	string str;
	while (true)
	{
		system("cls");
		cout << LanguageA << "[A]" << endl;
		cout << LanguageB << "[B]" << endl;
		cout << LanguageC << "[C]" << endl;
		cout << quits << "[D]" << endl;
		cin >> c;
		switch (c)
		{
		case 'A':
		case 'a':
		case '1':
			f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
			while (f >> str)
			{
				if (str == "Chinese")
				{
					cout << "你正在使用此语言！" << endl;
					Sleep(1500);
					break;
				}
				else if (NULL)
				{
					f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
					f << "Chinese";
					f.close();
				}
				else
				{
					ChineseV();
					cout << "设置成功!" << endl;
					Sleep(1500);
				}
			}
			f.close();
			goto LS;
			break;
		case 'B':
		case 'b':
		case '2':
			f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
			while (f >> str)
			{
				if (str == "English")
				{
					cout << "You are using this language" << endl;
					Sleep(1500);
					break;
				}
				else if (NULL)
				{
					f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
					f << "English";
					f.close();
				}
				else
				{
					EnglishV();
					cout << "Set up!" << endl;
					Sleep(1500);
				}
			}
			f.close();
			goto LS;
			break;
		case 'D':
		case 'd':
		case '4':
			break;
		case 'C':
		case 'c':
		case '3':
			f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
			while (f >> str)
			{
				if (str == "Russian")
				{
					cout << "Вы используете этот язык" << endl;
					Sleep(1500);
					break;
				}
				else if (NULL)
				{
					f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
					f << "Russian";
					f.close();
				}
				else
				{
					RussianV();
					cout << "Set up!" << endl;
					Sleep(1500);
				}
			}
			f.close();
			goto LS;
			break;
		default:
			cout << UnknowType << c << endl;
			goto LS;
			break;
		}
		break;
	}
}
void DefTheme()
{
	system("color 07");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "default";
	def.close();
}
void A()
{
	system("color 70");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "A";
	def.close();
}
void B()
{
	system("color 09");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "B";
	def.close();
}
void C()
{
	system("color 0D");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "C";
	def.close();
}
void D()
{
	system("color C4");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "D";
	def.close();
}
void E()
{
	system("color 0F");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "E";
	def.close();
}
void F()
{
	system("color 0A");
	ofstream def;
	def.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", fstream::out);
	def << "F";
	def.close();
}
void ReadTheme()
{
	fstream f;
	string str;
	f.open("C:\\CommandPlusPlus\\theme\\themeValue.txt", ios::in | ios::out | ios::app);
	while (f >> str)
	{
		if (str == "default")
		{
			DefTheme();
		}
		else if (str == "A")
		{
			A();
		}
		else if (str == "B")
		{
			B();
		}
		else if (str == "C")
		{
			C();
		}
		else if (str == "D")
		{
			D();
		}
		else if (str == "E")
		{
			E();
		}
		else if (str == "F")
		{
			F();
		}
		else
		{
			MessageBox(0, "错误!themeValue.txt出现了无法解析的外部符号,自动将主题改为默认", "错误!!!", MB_ICONERROR);
			DefTheme();
		}
	}
	f.close();
}
void ReadJSON()
{
	fstream f;
	string str;
	f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", ios::in | ios::out | ios::app);
	while (f >> str)
	{
		if (str == "Chinese")
		{
			ChineseV();
		}
		else if(str == "English")
		{
			EnglishV();
		}
		else if (str == "Russian")
		{
			RussianV();
		}
		else
		{
			MessageBox(0,"错误!LanguageValue.txt出现了无法解析的外部符号,自动将语言改为中文", "错误!!!",MB_ICONERROR);
			ChineseV();
		}
	}
	f.close();
}
void Style()
{
	char c;
	while (true)
	{
		system("cls");
		cout << AAA_theme << "[A]" << endl;
		cout << Sea_theme << "[B]" << endl;
		cout << Cash_theme << "[C]" << endl;
		cout << RE_theme << "[D]" << endl;
		cout << Old_theme << "[E]" << endl;
		cout << Hack_theme << "[F]" << endl;
		cout << default_theme << "[G]" << endl;
		cout << quits << "[H]" << endl;
		cin >> c;
		switch (c)
		{
		case 'A':
		case 'a':
		case '1':
			A();
			break;
		case 'B':
		case 'b':
		case '2':
			B();
			break;
		case 'C':
		case 'c':
		case '3':
			C();
			break;
		case 'D':
		case 'd':
		case '4':
			D();
			break;
		case 'E':
		case 'e':
		case '5':
			E();
			break;
		case 'F':
		case 'f':
		case '6':
			F();
			break;
		case 'G':
		case 'g':
		case '7':
			DefTheme();
			break;
		case 'H':
		case 'h':
		case '8':
			goto End;
			break;
		default:
			cout << 未知字符，主题将改为默认 << endl;
			system("color 07");
			break;
		}
	}
End:
	return;
}
void quit(int times)
{
	char i;
	while (true)
	{
		hend:
		cout << BeSureOfQuit << "?(Y/N)" << endl;
		cin >> i;
		switch (i)
		{
		case 'Y':
		case 'y':
		case '1':
			system("cls");
			cout << Close << endl;
			Sleep(times);
			system("cls");
			exit(0);
			break;
		case 'N':
		case 'n':
		case '2':
			system("cls");
			break;
		case '\n':
			goto hend;
			break;
		default:
			goto hend;
			break;
		}
		break;
	}
}
void Die(int s, int n , int F, int T)
{
	while (true)
	{
		ofstream f;
		f.open("C:\\CommandPlusPlus\\source\\source.txt", fstream::out);
		f << s;
		system("cls");
		cout << Diff << n << endl << 你获得了 << s << 分 << endl << ErrorSub << " : " << F << endl << TureSub << " : " << T << endl;
		system("pause");
		system("cls");
		break;
	}
	
}
class SubjectRandom
{
public:
	SubjectRandom();
};
SubjectRandom::SubjectRandom()
{
	int addN = 0;
	int dif = 1;
	int Life = 5;
	int TuP = 0;
	int FuP = 0;
	char d;
	int RandMax = 0;
	int RandCMax = 4;
	int End;
	int e;
	int time = 3;
	int tts = 0;
	int A;
	int B;
	int C;
	cout << 请选择难度 << endl;
	cin >> d;
	switch (d)
	{
	case '1':
		addN = 10;
		dif = 1;
		Life = 5;
		TuP = 0;
		FuP = 0;
		system("cls");
		RandMax = 10;
		A = rand() % RandMax;
		B = rand() % RandMax;
		C = rand() % RandCMax;
		break;
	case '2':dif = 2;
		addN = 5;
		Life = 4;
		TuP = 0;
		FuP = 0;
		system("cls");
		RandMax = 25;
		A = rand() % RandMax;
		B = rand() % RandMax;
		C = rand() % RandCMax;
		break;
	case '3':dif = 3;
		addN = 3;
		Life = 3;
		TuP = 0;
		FuP = 0;
		system("cls");
		RandMax = 50;
		A = rand() % RandMax;
		B = rand() % RandMax;
		C = rand() % RandCMax;
		break;
	case '4':dif = 4;
		addN = 2;
		TuP = 0;
		FuP = 0;
		Life = 2;
		system("cls");
		RandMax = 100;
		A = rand() % RandMax;
		B = rand() % RandMax;
		C = rand() % RandCMax;
		break;
	default:dif = 999;
		addN = 1;
		TuP = 0;
		FuP = 0;
		Life = 1;
		system("cls");
		cout << 隐藏难度;
		RandMax = 500;
		A = rand() % RandMax;
		B = rand() % RandMax;
		C = rand() % RandCMax;
		break;
	}
	while (true)
	{
		switch (C)
		{
		case 0:
			A = rand() % RandMax;
			B = rand() % RandMax;
			C = rand() % RandCMax;
			while (1) {
				cout << A << " + " << B << " = ";
				End = A + B;
				cin >> e;
				if (e == End) {
					cout << 正确，得分加 << addN << endl;
					tts = tts + addN;
					TuP++;
					A = rand() % RandMax;
					B = rand() % RandMax;
					C = rand() % RandCMax;
					break;
				}
				else {
					FuP++;
					cout << 错误，次数减1 << endl;
					Life--;
					break;
				}
			}
			break;
		case 1:
			A = rand() % RandMax;
			B = rand() % RandMax;
			C = rand() % RandCMax;
			while (1) {
				cout << A << " - " << B << " = ";
				End = A - B;
				cin >> e;
				if (e == End) {
					TuP++;
					cout << 正确，得分加 << addN << endl;
					tts = tts + addN;
					break;
				}
				else {FuP++;
					cout << 错误，次数减1 << endl;
					Life--;
					break;
				}
			}
			break;
		case 2:
			A = rand() % RandMax;
			B = rand() % RandMax;
			C = rand() % RandCMax;
			while (1) {
				cout << A << " * " << B << " = ";
				End = A * B;
				cin >> e;
				if (e == End) {
					TuP++;
					cout << 正确，得分加 << addN << endl;
					tts = tts + addN;
					break;
				}
				else {
					FuP++;
					cout << 错误，次数减1 << endl;
					Life--;
					break;
				}
			}
			break;
		case 3:
			A = rand() % RandMax;
			B = rand() % RandMax;
			C = rand() % RandCMax;
			while (1) {
				cout << A << " / " << B << " = ";
				if (B == 0)
				{
					cout << "题目有误，进入下一题" << endl;
					break;
				}
				else
				{
					End = A / B;
					cin >> e;
					if (e == End) {
						TuP++;
						cout << "正确，得分加" << addN << endl;
						tts = tts + addN;
						break;
					}
					else {
						FuP++;
						cout << "错误，次数减1" << endl;
						Life--;
						break;
					}
				}
			}
			break;
		}
		if (Life <= 0|| tts >= 99999999 )
		{
			Die(tts, dif, FuP, TuP);
			break;
		}
	}
}
void Calculator(double A,double B,char C)
{
	double End;
	switch (C) {
	case '+':
		End = A + B;
		cout << "=" << End<< endl; break;
	case '-':
		End = A - B; cout << "=" << End<<endl; break;
	case '*':
	case '×':
		End = A * B; cout << "=" << End<<endl; break;
	case '/':
	case '÷':
		End = A / B; cout << "=" << End <<endl; break;
	case '^':
		End = pow(A, B); cout << "=" << End << endl; break;
	case 'S':case 's':case '&':
		End = sqrt(A); if (A <= 0) { printf("Negative numbers or 0 do not have square roots\n"); }
		else { printf("%lf的平方根 = %lf",A,End); }break;
	case 'c':
	case 'C':
		system("cls");
		break;
	default:
		cout << "I'm sorry, but please check your command and try again, there must be something wrong with it,thank you" << endl;
		break;
	}
}
void Abs(int NumA)
{
	int A = NumA;
	int End = abs(A);
	printf("| %i | = %i\n", A, End);
	system("pause");
}
void Factorization()
{
	
}
void Settings()
{
	char c;
	while (true)
	{
	G:
		system("cls");
		cout << themeSet << "[A]" << "\n" << TVS << "[B]" << "\n" << LVS << "[C]" << "\n" << quits << "[D]\n";
		cin >> c;
		switch (c)
		{
		case 'A':
		case 'a':
		case '1':
			Style();
			break;
		case 'B':
		case 'b':
		case '2':
			break;
		case 'C':
		case 'c':
		case '3':
			LanguageSet();
			break;
		case 'D':
		case 'd':
		case '4':
			break;
		default:
			goto G;
			break;
		}
		break;
	}
}
int main()
{
	fstream f;
	ReadJSON();
	ReadTheme();
	int quittime = 1500;
	double A,B = 0;
	char C = 0;
	char i,i2;
	SetConsoleTitle("Command Plus - v2.9f0c");
	while (true)
	{
	Start:
		system("cls");
		cout << Math << " [A]" << endl << Set << " " << "[B]" << endl << quits << " [C]" << endl;
		cin >> i;
		if (i == 'A'|| i == 'a')
		{
			while (true)
			{
				system("cls");
				cout<< NormalSub << " " << "[A]" << "\n" << StrAbs << " " << "[B]" << endl << StrF << " " << "[C]" << "\n" << RandSub << " " << "[D]" << endl << Set << " " << "[E]" << endl << quits << " " << "[F]" << endl;
				cin >> i2;
				switch (i2)
				{
				case 'A':
				case 'a':
					system("cls");
					while (true)
					{
						cout << PleaseInputASubject << endl;
						cin >> A >> C >> B;
						if (C == 'Q' || C == 'q')
						{
							break;
						}
						else if (C == 'C' || C == 'c')
						{
							system("cls");
						}
						Calculator(A, B, C);
					}
					break;
				case 'B':
				case 'b':
					system("cls");
					int a;
					cout << PleaseInputANum;
					cin >> a;
					Abs(a);
					break;
				case 'C':
				case 'c':
					cout << "To be continued\n";
					Sleep(3000);
					system("cls");
					break;
				case 'D':
				case 'd':
					SubjectRandom::SubjectRandom();
					break;
				case 'E':
				case 'e':
					Settings();
					break;
				case 'F':
				case 'f':
					goto Start;
					break;
				default:
					system("cls");
					cout << UnknowType << i2 << endl;
					system("pause");
					system("cls");
					break;
				}
			}
		}
		else if (i == 'B'|| i == 'b')
		{
			Settings();
		}
		else if (i == 'C'||i == 'c')
		{
			system("cls");
			quit(quittime);
		}
		else
		{
			cout << UnknowType << i << endl;
		}
	}
}