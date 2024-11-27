#include <stdio.h>

int main()
{
	int matkhau = 24;
	int matma;
	printf("Nhap mat khau : ");
	scanf("%d", &matma);
	while(matma!=matkhau){
		printf("Nhap mat khau : ");
		scanf("%d", &matma);
		if(matma==matkhau){
			printf("Ban da nhap dung mat khau !!!");
			break;
		}
	}
	return 0;
}
