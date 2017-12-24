#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <fstream> 
#include <iostream>
#include <string>
using namespace std;

#define MAX 100

struct Information{
	char name[20];
	char memo[20];
	char group[20];
	int day;
}ig[MAX];


typedef struct Information Info;

int size = 0;

char outname[20], outwriter[20], outpub[20];
int outpri;

int find(Info ig[], char *name);
void add(Info ig[]);
void remove(Info ig[]);
void output(Info ig[]);	
void save(Info ig[]);
void load(Info ig[]);
int find1(Info ig[], char *name);
void add1(Info ig[]);
void remove1(Info ig[]);
void output1(Info ig[]);
void save1(Info ig[]);
void load1(Info ig[]);
void fridge();

void freezer(){
	
	int c;
		while (true){
	system("cls");

		cout << endl;
		cout << "	                   - �õ��� - " << endl;
		cout << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ��        1        ��     ��        2        ��" << endl;
		cout << "	 ��    ��� �߰�    ��     ��    ��� ����    ��" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ��        3        ��     ��        4        ��" << endl;
		cout << "	 ��    ������Ѽ�   ��     ��     ��ü����    ��" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ��        5        ��     ��        6        ��" << endl;
		cout << "	 ��      �����     ��     ��       ����      ��" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << endl;
		cout << endl;


			cout << endl;
			cout << "		             -> ";
			cin >> c;
			switch (c) {
			case 1:	
				add(ig);
				break;
			case 2:
				remove(ig);
				break;
			case 3:
				
				break;
			case 4:
				output(ig);
				break;
			case 5:
				fridge();
				break;
			case 6:
				cout << "		          �����մϴ�." << endl;
				cout << endl;
				exit(1);

			default:
				cout << endl;
				cout << "		          �ٽ� �Է����ּ���!" << endl;
			}
			_getch();
		}
}



void add(Info ig[]){
	void load();
	if (size < MAX) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "	 �������������������������" << endl;
		cout << endl;
		cout << "	 �߰��� ��� �� : ";
		cin >> ig[size].name;
		cout << endl;
		cout << "	 �з� (���� / ä�ҷ� / ���Ϸ� / ���� / ��Ÿ) : ";
		cin >> ig[size].group;
		cout << endl;
		cout << "	 �޸� : ";
		cin >> ig[size].memo;
		cout << endl;
		cout << "	 ������� (2017.09.24 -> 170924) : ";
		cin >> ig[size].day;

		cout << endl;
		cout << "	 ��������������������������" << endl;

		size++;
	}
		save(ig);
		void freezer();
}


void remove(Info ig[]){
	int i;
	int index;
	char name[20];
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	 �������������������������" << endl;
	cout << endl;
	cout << "	 ������ ��� :";
	cin >> name;
	cout << endl;
	cout << endl;

	index = find(ig, name);
	if (index == -1){
		cout << endl;
		cout <<"	 "<< name << "��(��) �������� �ʽ��ϴ�." << endl;
	}
	else{
		for (i = index; i < size - 1; i++)
		{
			ig[i] = ig[i + 1];
			cout << endl;
			cout <<"	 "<< name << "��(��) �����Ͽ����ϴ�." << endl;
		}
		size--;
	}
	cout << "	 �������������������������" << endl;
}


int find(Info ig[], char *name)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (strcmp(ig[i].name, name) == 0)
			return i;
		else
			return -1;
	}
}

void output(Info ig[]){

	void load();

	int i;
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	 �������������������������" << endl;
	cout << endl;
	cout << "	 ���	�з�	�޸�	�������" << endl;
	cout << endl;
	cout << "	 -----------------------------------------------" << endl;
	cout << endl;
	for (i = 0; i < size; i++)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
		cout<<"	 " << ig[i].name << "	" << ig[i].group << "	" << ig[i].memo << "	" << ig[i].day << endl;
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "	 �������������������������" << endl;
}


void save(Info ig[]){
	int i;
	char fname[] = "ingredient1.txt";
	FILE *f = fopen(fname, "w");
	if (f == NULL){
		cout << "������ �������� �ʽ��ϴ�." << endl;
	}
	else
	{
		for (i = 0; i < size; i++)
			fprintf(f, "%s	%s	%s	%d\n", ig[i].name, ig[i].memo, ig[i].group, ig[i].day);
	}
	fclose(f);
}

void load(Info ig[]){

	int i = 0;
	char fname[] = "ingredient1.txt";
	FILE *f = fopen(fname, "r");
	if (f == NULL){
		cout << "������ �������� �ʽ��ϴ�." << endl;
	}
	else
	{
		while (!feof(f)){
			fscanf(f, "%s	%s	%s	%d\n", ig[i].name, ig[i].memo, ig[i].group, &ig[i].day);
			i++;
			size++;
		}
	}
	fclose(f);
}


void fridge(){

	int c;
	while (true){
	system("cls");

		cout << endl;
		cout << "	                   - ����� -"<< endl;
		cout << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ��        1        ��     ��        2        ��" << endl;
		cout << "	 ��    ��� �߰�    ��     ��    ��� ����    ��" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ��        3        ��     ��        4        ��" << endl;
		cout << "	 ��   ������Ѽ�    ��     ��     ��ü����    ��" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ��        5        ��     ��        6        ��" << endl;
		cout << "	 ��      �õ���     ��     ��       ����      ��" << endl;
		cout << "	 ��                 ��     ��                 ��" << endl;
		cout << "	 ������ ������     ������ ������" << endl;
		cout << endl;
		cout << endl;


		cout << endl;
		cout << "		             -> ";
		cin >> c;
		switch (c) {
		case 1:
			add1(ig);
			break;
		case 2:
			remove1(ig);
			break;
		case 4:
			output1(ig);
			break;
		case 5:
			freezer();
			break;
		case 6:
			cout << "		          �����մϴ�." << endl;
			cout << endl;
			exit(1);

		default:
			cout << endl;
			cout << "		          �ٽ� �Է����ּ���!" << endl;
		}
		_getch();
	}
}



void add1(Info ig[]){
	void load1();
	if (size < MAX) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << "	 �������������������������" << endl;
		cout << endl;
		cout << "	 �߰��� ��� �� : ";
		cin >> ig[size].name;
		cout << endl;
		cout << "	 �з� (���� / ä�ҷ� / ���Ϸ� / ���� / ��Ÿ) : ";
		cin >> ig[size].group;
		cout << endl;
		cout << "	 �޸� : ";
		cin >> ig[size].memo;
		cout << endl;
		cout << "	 ������� (2017.09.24 -> 170924) : ";
		cin >> ig[size].day;

		cout << endl;
		cout << "	 ��������������������������" << endl;

		size++;
	}
		save1(ig);
		void freezer();
}


void remove1(Info ig[]){
	int i;
	int index;
	char name[20];
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	 �������������������������" << endl;
	cout << endl;
	cout << "	 ������ ��� :";
	cin >> name;
	cout << endl;
	cout << endl;

	index = find(ig, name);
	if (index == -1){
		cout << endl;
		cout << "	 " << name << "��(��) �������� �ʽ��ϴ�." << endl;
	}
	else{
		for (i = index; i < size - 1; i++)
		{
			ig[i] = ig[i + 1];
			cout << endl;
			cout << "	 " << name << "��(��) �����Ͽ����ϴ�." << endl;
		}
		size--;
	}
	cout << "	 �������������������������" << endl;
}



int find1(Info ig[], char *name)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (strcmp(ig[i].name, name) == 0)
			return i;
		else
			return -1;
	}
}

void output1(Info ig[]){

	void load1();

	int i;
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	 �������������������������" << endl;
	cout << endl;
	cout << "	 ���	�з�	�޸�	�������" << endl;
	cout << endl;
	cout << "	 -----------------------------------------------" << endl;
	cout << endl;
	for (i = 0; i < size; i++)
	{
		cout << "	 " << ig[i].name << "	" << ig[i].group << "	" << ig[i].memo << "	" << ig[i].day << endl;
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "	 �������������������������" << endl;
}

void save1(Info ig[]){
	int i;
	char fname[] = "ingredient2.txt";
	FILE *f = fopen(fname, "w");
	if (f == NULL){
		cout << "������ �������� �ʽ��ϴ�." << endl;
	}
	else
	{
		for (i = 0; i < size; i++)
			fprintf(f, "%s	%s	%s	%d\n", ig[i].name, ig[i].group, ig[i].memo, ig[i].day);
	}
	fclose(f);
}

void load1(Info ig[]){

	int i = 0;
	char fname[] = "ingredient2.txt";
	FILE *f = fopen(fname, "r");
	if (f == NULL){
		cout << "������ �������� �ʽ��ϴ�." << endl;
	}
	else
	{
		while (!feof(f)){
			fscanf(f, "%s	%s	%s	%d\n", ig[i].name, ig[i].group, ig[i].memo, &ig[i].day);
			i++;
			size++;
		}
	}
	fclose(f);
}

void choose(){
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	 ����������������������������" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��         �õ���         ��         �����         ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��          -> 1          ��          -> 2          ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                 ���   ��   ���                 ��" << endl;
	cout << "	 ��                 ���   ��   ���                 ��" << endl;
	cout << "	 ��                 ���   ��   ���                 ��" << endl;
	cout << "	 ��                 ���   ��   ���                 ��" << endl;
	cout << "	 ��                 ���   ��   ���                 ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ��                        ��                        ��" << endl;
	cout << "	 ����������������������������" << endl;

	cout << endl;
	cout << endl;
	int c;
	while (true){
		cout << endl;
		cout << "		                 -> ";
		cin >> c;
		switch (c){
		case 1:
			freezer();
			break;
		case 2:
			fridge();
			break;
		default:
			cout << endl;
			cout << "		          �ٽ� �Է����ּ���!" << endl;
		}
	}
}
void title(){
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	 ��      ��  ��      �����   ��       ������" << endl;
	cout << "	 ��      ��  ��         ��      ��               ��" << endl;
	cout << "	 ��      ����       ��  ��    ���             ��" << endl;
	cout << "	 ����  ��  ��      ��    ��   ��               ��" << endl;
	cout << "	                                             ��" << endl;
	cout << "	   ������          ������            �� " << endl;
	cout << "	  ��        ��        ��        ��           ��" << endl;
	cout << "	   ������          ������      ��������" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	                   ����   ��" << endl;
	cout << "	   ��      ��      ��       ��         ��" << endl;
	cout << "	   ������      ����   ���   ������  ��  ��" << endl;
	cout << "	   ��      ��      ��       ��                 ��  �� " << endl;
	cout << "	   ������      ����   ��       ����    ��  ��" << endl;
	cout << "	                                    ��    ��   ����" << endl;
	cout << "	 ��������     ������      ��    ��   ��  ��" << endl;
	cout << "	       ��                   ��       ����    ��  ��" << endl;
	cout << "	       ��                   ��                 ��  ��" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "	                                          2508 �ڰ���" << endl;
	Sleep(3000);
	choose();

}

int main(){
	system("mode con cols=70 lines=35");
	system("color 8B");
	title();
}