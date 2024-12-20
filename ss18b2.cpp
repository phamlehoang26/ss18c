#include<stdio.h>
#include<string.h>
int main(){
	struct sinhVien{
		char name[50];
		int age;
		char phone[20];
		
	};
	struct sinhVien so1;
	printf("moi ban nhap ten : ");
    fgets(so1.name,50,stdin);
    fflush(stdin);
    printf("moi ban nhap tuoi : ");
    scanf("%d",&so1.age);
    printf("moi ban nhap so dien thoai :");
    scanf("%s",&so1.phone);
    
	
	
	printf("ten cua ban la : %s\n",so1.name);
	printf("tuoi cua ban la : %d\n",so1.age);
	printf("so dien thoai cua ban la : %s\n",so1.phone);
	
	
	
	
	
	return 0;
}
