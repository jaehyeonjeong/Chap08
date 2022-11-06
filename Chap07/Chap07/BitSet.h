#ifndef __BitSet
#define __BitSet

typedef unsigned long BitSet;	/*집합을 나타내는 자료형*/

#define BitSetNull	(BitSet) 0	/*공집합*/
#define BitSetBits 32			/*유효 비트 수*/
#define SetOf(no) ((BitSet)1 << (no))	/*집합 (no)*/

/*집합 s에 n이 있는지 확인*/
int BIsMember(BitSet s, int n);

/*집합 s에 n을 추가*/
void BAdd(BitSet* s, int n);

/*집합 s에서 n을 삭제*/
void BRemove(BitSet* s, int n);

/*집합 s의 원소 개수를 반환*/
int BSize(BitSet s);

/*집합 s의 모든 원소를 출력*/
void BPrint(BitSet s);

/*집합 s의 모든 원소를 출력(줄 바꿈 문자 포함)*/
void BPrintLn(BitSet s);

#endif