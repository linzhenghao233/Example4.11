/* intconv.c -- һЩ��ƥ�������ת�� */
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void) {
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short %hd %hu\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;
}

//���н����
//num as short and unsigned short: 336 336
//-num as short and unsigned short -336 65200
//num as int and char: 336 P
//WORDS as int, short, and char: 65618 82 R