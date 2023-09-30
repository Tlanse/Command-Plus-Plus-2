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
	Language.assign("����");
	LVS.assign("��������");
	TVS.assign("�ı�����");
	themeSet.assign("��������");
	Math.assign("��ѧ�����");
	Set.assign("����");
	quits.assign("�˳�");
	default_theme.assign("Ĭ��");
	Sea_theme.assign("����");
	Cash_theme.assign("�߹�");
	RE_theme.assign("����Σ��");
	Old_theme.assign("Զ��");
	Hack_theme.assign("�ڿ͵۹�");
	AAA_theme.assign("����");
	UnknowType.assign("δ֪�ַ�:");
	PleaseInputASubject.assign("��������ʽ");
	PleaseInputANum.assign("������һ��С��999999������\n");
	BeSureOfQuit.assign("ȷ���˳�?");
	LanguageA.assign("����");
	LanguageB.assign("Ӣ��");
	LanguageC.assign("����");
	δ֪�ַ������⽫��ΪĬ��.assign("δ֪�ַ������⽫��ΪĬ��");
	Close.assign("�ػ���");
	Diff.assign("�Ѷ�:");
	������.assign("������ ");
	��.assign(" ��");
	ErrorSub.assign("����");
	TureSub.assign("����");
	RandSub.assign("�����ʽ��ս");
	StrF.assign("��ʽ�ֽ�");
	NormalSub.assign("��ͨ��ʽ");
	StrAbs.assign("����ֵ");
	��ѡ���Ѷ�.assign("��ѡ���Ѷ�(1 - 4):");
	�����Ѷ�.assign("�����Ѷ�\n");
	��ȷ���÷ּ�.assign("��ȷ���÷ּ�");
	���󣬴�����1.assign("���󣬴�����1");
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
	δ֪�ַ������⽫��ΪĬ��.assign("Unknown characters, the theme will be changed to default");
	Close.assign("Closing");
	Diff.assign("Difficulty:");
	������.assign("You got ");
	��.assign(" points");
	ErrorSub.assign("Wrong question");
	TureSub.assign("Correct question");
	RandSub.assign("Stochastic challenge");
	StrF.assign("Factorization");
	NormalSub.assign("Normal calculations");
	StrAbs.assign("Absolute value");
	��ѡ���Ѷ�.assign("Please select difficulty (1 - 4):");
	�����Ѷ�.assign("Hide difficulty\n");
	��ȷ���÷ּ�.assign("Correct, score plus ");
	���󣬴�����1.assign("Error, the number of times minus 1");
}
void RussianV()
{
	ofstream f;
	f.open("C:\\CommandPlusPlus\\lang\\LanguageValue.txt", fstream::out);
	f << "Russian";
	f.close();
	Language.assign("���٧��");
	LVS.assign("���٧�ܧ�ӧ�� �ߧѧ����ۧܧ�");
	TVS.assign("���ѧ����ۧܧ� ��֧ܧ���");
	themeSet.assign("���ѧ����ۧܧ� ��֧ާ�");
	Math.assign("���ѧ�֧ާѧ�ڧܧ�");
	Set.assign("���ѧ�ѧާ֧���");
	quits.assign("����ܧڧէѧ��");
	default_theme.assign("���� ��ާ�ݧ�ѧߧڧ�");
	Sea_theme.assign("���ܧ֧ѧ�");
	Cash_theme.assign("������ݧ֧ӧ�ܧڧ�");
	RE_theme.assign("���ҧڧ�֧ݧ� �٧ݧ�");
	Old_theme.assign("����֧ӧߧڧ�");
	Hack_theme.assign("����ҧڧ��");
	AAA_theme.assign("���ݧѧ��ڧܧ�");
	UnknowType.assign("���֧ڧ٧ӧ֧��ߧ�� ��֧���ߧѧا�:");
	PleaseInputASubject.assign("����اѧݧ�ۧ���, �ӧӧ֧էڧ�� ����ާ�ݧ�");
	PleaseInputANum.assign("���ӧ֧էڧ�� ��֧ݧ�� ��ڧ�ݧ� �ާ֧ߧ��� 999999\n");
	BeSureOfQuit.assign("���� ��ӧ֧�֧ߧ�, ���� ����ڧ�� �ҧ���ڧ�� �ܧ��ڧ��");
	LanguageA.assign("���ڧ�ѧۧ�ܧڧ�");
	LanguageB.assign("���ߧԧݧڧۧ�ܧڧ�");
	LanguageC.assign("������ܧڧ�");
	δ֪�ַ������⽫��ΪĬ��.assign("���֧ڧ٧ӧ֧��ߧ�� ��ڧާӧ�ݧ�, ��֧ާ� �ҧ�է֧� �ڧ٧ާ֧ߧ֧ߧ� �ߧ� ���ѧߧէѧ��ߧ��");
	Close.assign("���ѧܧ���ڧ�");
	Diff.assign("�����էߧ����:");
	������.assign("�� �ӧѧ� �֧��� ");
	��.assign(" �է��ҧ�");
	ErrorSub.assign("���֧��ѧӧڧݧ�ߧ�� �ӧ�����");
	TureSub.assign("����ѧӧڧݧ�ߧ�� �ӧ�����");
	RandSub.assign("������ѧ��ڧ�֧�ܧڧ� �ӧ�٧��");
	StrF.assign("��ѧܧ���ڧ٧ѧ�ڧ�");
	NormalSub.assign("�����ާѧݧ�ߧ�� ��ѧ��֧��");
	StrAbs.assign("���ҧ��ݧ��ߧѧ� �ӧ֧ݧڧ�ڧߧ�");
	��ѡ���Ѷ�.assign("����اѧݧ�ۧ���, �ӧ�ҧ֧�ڧ�� ��ݧ�اߧ���� (1 - 4):");
	�����Ѷ�.assign("���ܧ���� ��ݧ�اߧ����\n");
	��ȷ���÷ּ�.assign("����ѧӧڧݧ�ߧ�, ���֧ߧܧ� ��ݧ�� ");
	���󣬴�����1.assign("����ԧ�֧�ߧ����, �ܧ�ݧڧ�֧��ӧ� ��ѧ� �ާڧߧ�� 1");
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
					cout << "������ʹ�ô����ԣ�" << endl;
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
					cout << "���óɹ�!" << endl;
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
					cout << "���� �ڧ���ݧ�٧�֧�� ����� ��٧��" << endl;
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
			MessageBox(0, "����!themeValue.txt�������޷��������ⲿ����,�Զ��������ΪĬ��", "����!!!", MB_ICONERROR);
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
			MessageBox(0,"����!LanguageValue.txt�������޷��������ⲿ����,�Զ������Ը�Ϊ����", "����!!!",MB_ICONERROR);
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
			cout << δ֪�ַ������⽫��ΪĬ�� << endl;
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
		cout << Diff << n << endl << ������ << s << �� << endl << ErrorSub << " : " << F << endl << TureSub << " : " << T << endl;
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
	cout << ��ѡ���Ѷ� << endl;
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
		cout << �����Ѷ�;
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
					cout << ��ȷ���÷ּ� << addN << endl;
					tts = tts + addN;
					TuP++;
					A = rand() % RandMax;
					B = rand() % RandMax;
					C = rand() % RandCMax;
					break;
				}
				else {
					FuP++;
					cout << ���󣬴�����1 << endl;
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
					cout << ��ȷ���÷ּ� << addN << endl;
					tts = tts + addN;
					break;
				}
				else {FuP++;
					cout << ���󣬴�����1 << endl;
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
					cout << ��ȷ���÷ּ� << addN << endl;
					tts = tts + addN;
					break;
				}
				else {
					FuP++;
					cout << ���󣬴�����1 << endl;
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
					cout << "��Ŀ���󣬽�����һ��" << endl;
					break;
				}
				else
				{
					End = A / B;
					cin >> e;
					if (e == End) {
						TuP++;
						cout << "��ȷ���÷ּ�" << addN << endl;
						tts = tts + addN;
						break;
					}
					else {
						FuP++;
						cout << "���󣬴�����1" << endl;
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
	case '��':
		End = A * B; cout << "=" << End<<endl; break;
	case '/':
	case '��':
		End = A / B; cout << "=" << End <<endl; break;
	case '^':
		End = pow(A, B); cout << "=" << End << endl; break;
	case 'S':case 's':case '&':
		End = sqrt(A); if (A <= 0) { printf("Negative numbers or 0 do not have square roots\n"); }
		else { printf("%lf��ƽ���� = %lf",A,End); }break;
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