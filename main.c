/* Testing memory for genomic data */

#include<stdio.h>
#define u unsigned int

void main(void){

	struct test{
		u g1:3,g2:3,g3:3,g4:3;
                u g5:3,g6:3,g7:3, g8:3;
		u g9:3;};
	struct test t1 = {1,2,3,0,1,2,2,2,1};
	char t2[] = "agctagct";
	unsigned int t3[8] = {1,2,3,0,1,2,2,2};

	printf("\n8 pieces of genomic data (eg agctagct)\n");
	printf("\nsizeof bitfield = %d",sizeof(t1));
	printf("\nsizeof char array %s = %d",t2,sizeof(t2));
	printf("\nsizeof unsigned int array = %d\n",sizeof(t3));

	/*More than 8, testing struct array*/
	struct test t4[2] = {{1,2,3,0,1,2,2,2,1},{1,1,1,3,0,0,2,1,1}};
	char t5[] = "agctagctagcttagc";
	unsigned int t6[16] = {1,2,3,0,1,2,2,2,1,2,3,0,1,2,2,2};
	printf("\n16 pieces of genomic data");
        printf("\nsizeof bitfield = %d",sizeof(t4));
        printf("\nsizeof char array %s = %d",t5,sizeof(t5));
        printf("\nsizeof unsigned int array = %d\n",sizeof(t6));
}
