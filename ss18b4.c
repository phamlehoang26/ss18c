#include<stdio.h>
struct sinhVien{
	char name[50];
	int age;
	char phone[20];
	int id;
};
int main(){
	struct sinhVien soN[50];
	// lap thong tin
	for(int i=0;i<5;i++){
		soN[i].id = i + 1;
		
		printf("mooi ban nhap thong tin sinh vien %d\n",i+1);
		printf("moi ban nhap ten :\n");
		fgets(soN[i].name,50,stdin);
		fflush(stdin);
		printf("moi ban nhap tuoi : ");
		scanf("%d",&soN[i].age);
		getchar();
		printf("moi ban nhap so dien thoai : ");
		fgets(soN[i].phone,20,stdin);			
	}
	 printf("cac thong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
    	printf("id cua sinh vien la : %d\n",soN[i].id);
        printf("sinh vien %d:\n", i + 1);
        printf("ten cua sinh vien la: %s\n", soN[i].name);
        printf("tuoi cua sinh vien la: %d\n", soN[i].age);
        printf("so dien thoai: %s\n", soN[i].phone);
        printf("\n");
    }
	
	
	
	
	return 0;
}
