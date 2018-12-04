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
	
	int NUM;			//일련번호 
	int ID;				//학번 
	char NAME[10];		//이름 
	char BIRTH[20];		//생일 
	int MID;			//중간고사 점수 
	int FIN;			//기말고사 점수 
	int AVG;			//평균 점수 
	char GRADE;			//학점 
};

void Add_Entry ()		//엔트리 추가 
{
	
}

void Delete_Entry ()	//엔트리 삭제 
{
	
}
void Find_Item ()		//id나 이름으로 해당 학생의 시험 점수를 알려줌 
{
	
}

void Input_Point()		//시험 점수 입력 
{
	
}

void Modify_Entry()		//엔트리 수정 및 확인용 출력 
{
	
}

void Print_AllEntry()	//모든 엔트리의 정보 출력 
{
	
}

void Read_Data()		//데이터 파일 입력 
{
	
}

void Sort_Entry()		//엔트리 내림차순 정렬 
{
	
}

/* 
void Quit()				//프로그램 종료 , 이 함수는 아마 삭제될 것으로 예상됨 
{						//main 함수에서 if 문을 이용해 return 0로 강제종료가 가능하므로. 
	
}
*/

void Wight_Data()		//데이터 파일 출력 
{
	
}

int main()
{	
	struct INFO I [25];	//구조체 배열 
	char FUNC;			//기능 호출 변 수 
	
	printf("Choose one of the options above :   ");
	scanf("%c",&FUNC);

	switch(FUNC)
	{
		case 'a' :	//a가 입력되면 기능 a 실행 
			;
			break;
			
		case 'd' :	//d가 입력되면 기능 d 실행 
			;
			break;
		
		case 'f' :	//f가 입력되면 기능 f 실행
			;
			break;
			
		case 'i' :	//i가 입력되면 기능 i 실행
			;
			break;
			
		case 'm' :	//m이 입력되면 기능 m 실행
			;
			break;
			
		case 'p' :	//p가 입력되면 기능 p 실행
			;
			break;
			
		case 'r' :	//r이 입력되면 기능 r 실행
			;
			break;
			
		case 's' :	//s가 입력되면 기능 s 실행
			;
			break;
			
		case 'q' :	//q가 입력되면 기능 q 실행
			;
			break;
			
		case 'w' :	//w가 입력되면 기능 w 실행
			;
			break;
			
		default :
			printf("Invalid Function, shut down program.\n" );
			return 0;
} 
	}
	return 0;
	
}
