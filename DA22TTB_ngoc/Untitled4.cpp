#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,key;
	while(true)
	{
		system("cls");
		printf("**********************************************************\n");
		printf("**           CHUONG TRINH QUAN LY SINH VIEN             **\n");
		printf("**           1. Nhap DS sinh vien                       **\n");
		printf("**           2. In danh sach sinh vien                  **\n");
		printf("**           3. Sap xep theo Kq cuoi khoa               **\n");
		printf("**           4. In sinh vien Gioi, Xuat sac             **\n");
		printf("**           5. Tim kiesm sinh vien theo MASV           **\n");
		printf("**           0. Thoat                                   **\n");
		printf("**********************************************************\n");
		
		printf("\n   \t\t         AN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
		{
			case 1:
				do{
					printf("\n NHAP SO LUONG SINH VIEN: ");
					scanf("%d",&n);
				  }
				 while(n<=0);
				 //goi ham
				 printf("\n Bam phim bat ky de tiep tuc!");
				 getch();
				 break;
			case 2:
				 printf("\n Bam phim bat ky de tiep tuc!");
				 //goi ham
				 getch();
				 break;
			case 3:
				 printf("\n Bam phim bat ky de tiep tuc!");
				 //goi ham
				 getch();
				 break;
			case 4:
				 printf("\n Bam phim bat ky de tiep tuc!");
				 //goi ham
				 getch();
				 break;
			case 5:
				 printf("\n Bam phim bat ky de tiep tuc!");
				 //goi ham
				 getch();
				 break;
			case 0:
				exit(1);
				default:
					printf("\n Khong co chuc nang nay!");
					printf("\n Bam phim bat ky de tiep tuc!");
					getch();
					break;
		}
	}
}


