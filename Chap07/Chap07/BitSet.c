#include <stdio.h>
#include "BitSet.h"

/*���� s�� n�� �ִ��� Ȯ��*/
int BIsMember(BitSet s, int n)
{
	return s & SetOf(n);
}

/*���� s�� n�� �߰�*/
void BAdd(BitSet* s, int n)
{
	*s |= SetOf(n);		/*��Ʈ���� �߰��ϴ� ����*/
}
/*���� s���� n�� ����*/
void BRemove(BitSet* s, int n)
{
	*s &= ~SetOf(n);	/*��Ʈ���� ���� �ϴ� ����*/
}


/*���� s�� ���� ������ ��ȯ*/
int BSize(BitSet s)
{
	int n = 0; 
	for (; s != BitSetNull; n++) /*�������� �� ������*/
		s &= s - 1;		/*���� �Ǿ��ִ� ���� ��ȯ*/
	return n;
}

/*���� s�� ��� ���Ҹ� ���*/
void BPrint(BitSet s)
{
	int i;
	printf("{ ");
	for (i = 0; i < BitSetBits; i++)
		if (BIsMember(s, i))
			printf("%d ", i);
	printf("}");

}

/*���� s�� ��� ���Ҹ� ���(�� �ٲ� ���� ����)*/
void BPrintLn(BitSet s)
{
	BPrint(s);
	putchar('\n');
}
