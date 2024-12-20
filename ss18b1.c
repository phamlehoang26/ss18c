#include<stdio.h>
int main(){
	struct sinhVien{
		char name[50];
		int age;
		char phone[20];
		
	};
	struct sinhVien so1={"pham le hoang",18,"097813245"	};
	
	printf("ten cua ban la : %s\n",so1.name);
	printf("tuoi cua ban la : %d\n",so1.age);
	printf("so dien thoai cua ban la : %s\n",so1.phone);
	
	
	
	
	
	return 0;
}
