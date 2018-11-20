/*
The Interval Partitioning Problem
���D�G���h�ӥ��(���w���}�l�P����ɶ�)�A�հݦܤֻݭn�X�x�귽�����~�ण�Ĭ�o�B�@�C
�Ѫk�G�b�����ɬq���A�|���Y�ɨ観�̦h����ȦP�ɽĬ�A���ɪ��Ĭ�ƶq�Y���ָ̤귽�����ƶq���ѡC
�ҩ���k�G1.�t��k�Y���̨θѡC 2.�ҩ��C�Ӯɨ�interval�ҷ|�Q����C 3.�ҩ����۽Ĭ�interval�ҥi�����P����������C
�ҩ��G�Y���Ѫk���θѬ��̤j�P�ɽĬ�ƶqm(�b�ɨ�T)�C
�h�bT�ɨ�e�A�@�w�s�bT-1�ɨ�A���ɰ��椤�������ƶq��m-1�C�N����h�l���귽�����i�H�m�J�s����ȡC

*/


#include<iostream>
#include<cstdlib>
#include<ctime>

#include"H1.h"


using namespace std;

char NumToName(int);




int main() {

	cout << endl << "======Procedure Start==================" << endl;
	
	srand((unsigned)time(NULL));

	
	cout << endl << "======��ȥͦ�===================" << endl;

	int NumberTask;
	NumberTask = rand() % 10 + 40;
	cout <<"The number of Task is "<< NumberTask << endl;
	
	for (int i = 0; i < 1; i++)
	{
		ClassTaskNode CTN1(65 + i, 20, 30);
		ClassTaskNode* CTNA1 = &CTN1;
		CTN1.display();
		CTNA1->display();
		cout << &CTN1 << endl;
		for (int j = 0; j < 1; j++)
		{
			ClassTaskNode CTN2(65 + j, 200, 300);
			CTNA1 = &CTN2;
			CTN2.display();
			CTNA1->display();
			cout << &CTN2 << endl;
		}
		CTNA1->display();
		ClassTaskNode CTN3(66, 2000, 3000);
		cout << &CTN3 << endl;
	}
	


	
	cout << endl << "========to set the Start+1 and End-1 moment========" << endl;






	system("pause");
	return 0;
}


char NumToName(int NameNumber) {

	if (NameNumber <= 0 || NameNumber > 26 * 2)
	{
		cout << "the input of RandName must be 1 to 52" << endl;
		return char(0);
	}
	if (NameNumber <= 26)
	{
		return char(64 + NameNumber);
	}
	else 
	{
		return char(96 + NameNumber - 26);
	}


};
