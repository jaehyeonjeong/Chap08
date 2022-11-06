#ifndef __BitSet
#define __BitSet

typedef unsigned long BitSet;	/*������ ��Ÿ���� �ڷ���*/

#define BitSetNull	(BitSet) 0	/*������*/
#define BitSetBits 32			/*��ȿ ��Ʈ ��*/
#define SetOf(no) ((BitSet)1 << (no))	/*���� (no)*/

/*���� s�� n�� �ִ��� Ȯ��*/
int BIsMember(BitSet s, int n);

/*���� s�� n�� �߰�*/
void BAdd(BitSet* s, int n);

/*���� s���� n�� ����*/
void BRemove(BitSet* s, int n);

/*���� s�� ���� ������ ��ȯ*/
int BSize(BitSet s);

/*���� s�� ��� ���Ҹ� ���*/
void BPrint(BitSet s);

/*���� s�� ��� ���Ҹ� ���(�� �ٲ� ���� ����)*/
void BPrintLn(BitSet s);

#endif