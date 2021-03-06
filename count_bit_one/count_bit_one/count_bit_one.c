#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//计算一个十进制数在二进制1的个数
//法一：利用移位与1按位与，按位与--全“1”则为“1”
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
//法二：利用%2再利用/2来求
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
//法三：利用n和n-1按位与
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