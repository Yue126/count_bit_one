#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ��ʮ�������ڶ�����1�ĸ���
//��һ��������λ��1��λ�룬��λ��--ȫ��1����Ϊ��1��
//int count_bit_one(int n){
//	int count =0 ;
//	int i = 0;
//	for (i=0;i<32;i++){
//		if((n>>i)&1 == 1){
//			count++;
//		}
//	}
//	return count;
//}
//����������%2������/2����
//int count_bit_one(unsigned int n ){
//	int b =  0;
//	int count = 0; 
//	while(n){
//		if((b = n % 2) == 1){
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//����������n��n-1��λ��
int count_bit_one(int n){
	int count = 0;
	while(n){
		n=n & (n-1);
		count++;
	}
	return count;
}
int main(){
	int a = 0;
	int count = 0;
	scanf("%d" ,&a);
	count = count_bit_one(a);
	printf("%d\n",count);
	return 0;
}