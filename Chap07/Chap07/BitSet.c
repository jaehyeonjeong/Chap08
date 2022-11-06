#include <stdio.h>
#include "BitSet.h"

/*집합 s에 n이 있는지 확인*/
int BIsMember(BitSet s, int n)
{
	return s & SetOf(n);
}

/*집합 s에 n을 추가*/
void BAdd(BitSet* s, int n)
{
	*s |= SetOf(n);		/*비트에서 추가하는 연산*/
}
/*집합 s에서 n을 삭제*/
void BRemove(BitSet* s, int n)
{
	*s &= ~SetOf(n);	/*비트에서 삭제 하는 연산*/
}


/*집합 s의 원소 개수를 반환*/
int BSize(BitSet s)
{
	int n = 0; 
	for (; s != BitSetNull; n++) /*공집합이 될 때까지*/
		s &= s - 1;		/*저장 되어있는 개수 반환*/
	return n;
}

/*집합 s의 모든 원소를 출력*/
void BPrint(BitSet s)
{
	int i;
	printf("{ ");
	for (i = 0; i < BitSetBits; i++)
		if (BIsMember(s, i))
			printf("%d ", i);
	printf("}");

}

/*집합 s의 모든 원소를 출력(줄 바꿈 문자 포함)*/
void BPrintLn(BitSet s)
{
	BPrint(s);
	putchar('\n');
}
