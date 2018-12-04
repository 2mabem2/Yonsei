/****************************************************************************
* FILE NAME: main.c                                                         *
* PURPOSE: Demonstration of array list                                      *
* EXTERNAL VARIABLES:                                                       *
* Name          Type            I/O         Description                     *
* ------------------------------------------------------------------------- *
* NOTES:                                                                    *
* The code creates an array that stores structs, each containing an ID,     *
* name pair. The array allows adding new entries at the beginning or end.   *
* The default size of array is 10, and it is doubled each time the array    *
* becomes full. A simple linear search is implemented to find an entry that *
* has matching ID.                                                          *
*                                                                           *
* DEVELOPMENT HISTORY:                                                      *
* Date       Author        Release No.1 Description of change               *
* ------------------------------------------------------------------------- *
* 11/22/2018 Donghyun Sin, Beomsik Cho 	v1.0.0       Initial commit			*
****************************************************************************/

#include<stdio.h>
#include<string.h>

struct INFO{
	
	int NUM;			//�Ϸù�ȣ 
	int ID;				//�й� 
	char NAME[10];		//�̸� 
	char BIRTH[20];		//���� 
	int MID;			//�߰���� ���� 
	int FIN;			//�⸻��� ���� 
	int AVG;			//��� ���� 
	char GRADE;			//���� 
};

void Add_Entry ()		//��Ʈ�� �߰� 
{
	
}

void Delete_Entry ()	//��Ʈ�� ���� 
{
	
}
void Find_Item ()		//id�� �̸����� �ش� �л��� ���� ������ �˷��� 
{
	
}

void Input_Point()		//���� ���� �Է� 
{
	
}

void Modify_Entry()		//��Ʈ�� ���� �� Ȯ�ο� ��� 
{
	
}

void Print_AllEntry()	//��� ��Ʈ���� ���� ��� 
{
	
}

void Read_Data()		//������ ���� �Է� 
{
	
}

void Sort_Entry()		//��Ʈ�� �������� ���� 
{
	
}

/* 
void Quit()				//���α׷� ���� , �� �Լ��� �Ƹ� ������ ������ ����� 
{						//main �Լ����� if ���� �̿��� return 0�� �������ᰡ �����ϹǷ�. 
	
}
*/

void Wight_Data()		//������ ���� ��� 
{
	
}

int main()
{	
	struct INFO I [25];	//����ü �迭 
	char FUNC;			//��� ȣ�� �� �� 
	
	printf("Choose one of the options above :   ");
	scanf("%c",&FUNC);

	switch(FUNC)
	{
		case 'a' :	//a�� �ԷµǸ� ��� a ���� 
			;
			break;
			
		case 'd' :	//d�� �ԷµǸ� ��� d ���� 
			;
			break;
		
		case 'f' :	//f�� �ԷµǸ� ��� f ����
			;
			break;
			
		case 'i' :	//i�� �ԷµǸ� ��� i ����
			;
			break;
			
		case 'm' :	//m�� �ԷµǸ� ��� m ����
			;
			break;
			
		case 'p' :	//p�� �ԷµǸ� ��� p ����
			;
			break;
			
		case 'r' :	//r�� �ԷµǸ� ��� r ����
			;
			break;
			
		case 's' :	//s�� �ԷµǸ� ��� s ����
			;
			break;
			
		case 'q' :	//q�� �ԷµǸ� ��� q ����
			;
			break;
			
		case 'w' :	//w�� �ԷµǸ� ��� w ����
			;
			break;
			
		default :
			printf("Invalid Function, shut down program.\n" );
			return 0;
} 
	}
	return 0;
	
}
