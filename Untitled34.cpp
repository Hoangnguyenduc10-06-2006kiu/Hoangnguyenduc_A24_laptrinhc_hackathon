#include<stdio.h>
#include <math.h>
int main(){
	int arr[100];
	int select,size;
	int i;
	int total;
do{
	printf("\n------------------------------menu-----------------------\n");
	printf("1.nhap so phan tu va gia tri trong mang\n");
	printf("2.In gia tri cua mang   \n");
	printf("3.in ra cac gia tri nho nhat va lon nhat \n");
	printf("4.in ra tong cac phan tu \n");
	printf("5.them mot phan tu vao cuoi mang \n");
	printf("6.xoa phan tu  \n");
	printf("7.sap xep theo thu tu giam dan \n");
	printf("8.tim kiem phan tu\n");
	printf("9.in ra so nguyen to\n");
	printf("10.sap xep theo kieu tang dan\n");
	printf("11.thoat\n");
	printf("lua chon cua ban: ");
	scanf("%d",&select);
	switch(select){
		case 1:
				do{
					printf("moi ban nhap so phan tu (1-100) ");
					scanf("%d",&size);
					if(size<=0){
						printf("gia tri khong thao man");
					}
				}while(size<=0 || size>=100);
					for(int i=0;i<size;i++){
							printf("moi ban nhap vi tri [%d] ",i);
							scanf("%d",&arr[i]);
					}
					
			break;
      case 2:
            if(size<=0){
						printf("moi ban nhap gia tri vao mang");
						break;
					}else{
						printf("cac gia tri cua mang\n");
						for(int i=0;i<size;i++){
							printf("arr[%d]=%d\n",i,arr[i]);
						}
					}
			break;		
		case 3:
		if(size<=0){
						printf("moi ban nhap gia tri vao mang");
						break;
					}else{
						int max=arr[0];
						for(int i=0;i<size;i++){
							if(arr[i]>max){
								max=arr[i];
							}	
						}
						printf("gia tri lon nhat cua mang la %d\n",max);
						int min=arr[size-1];
						for(int i=size-1;i>=0;i--){
							if(arr[i]<min){
								min=arr[i];
							}	
						}
						printf("gia tri nho nhat cua mang la %d",min);
					}
			break;
		case 4:
			for(int i=0;i<size;i++){
				 total+=arr[i];
			}
			printf("tong cac gia tri bang: %d",total);
			break;	
		case 5:
		if(size<=0){
						printf("moi ban nhap gia tri vao mang");
						break;
					}else if(size>=100){
							printf("khong con cho trong ");
							break;
					}else{
						int value, index;
		                    printf("Nhap gia tri can them: ");
		                    scanf("%d", &value);
		                    do {
		                        printf("Nhap vi tri can chen (0 - %d): ", size);
		                        scanf("%d", &index);
		                        if (index < 0 || index > size) {
		                            printf("Vi tri khong hop le! vui long nhap lai.\n");
		                        }
		                    }while (index < 0 || index > size);
		                    
		                    for (int i = size; i > index; i--) {
		                        arr[i] = arr[i - 1];
		                    }
		                    arr[index] = value;
		                    size++;
		                    printf("Mang sau khi them: ");
		                    for (int i = 0; i < size; i++) {
		                        printf("%d ", arr[i]);
		                    }
		                    printf("\n");
		                }
			break;	
		case 6:
			if(size<=0){
					printf("moi ban nhap giai tri can vao mang");
					break;
			}else {
				int deletee;
				do{
	                printf("Nhap vi tri gia tri can xoa(0 - %d): ",size-1);
	                scanf("%d", &deletee);
	                if(deletee>size){
	                	printf("moi ban nhap lai gia tri can xoa");
					}
			    }while(deletee>size);
	                for(int i=deletee;i<size;i++){
	                	if(deletee==i){
	                		arr[i]=arr[i+1];
						}
					}
				size--;
				printf("mang sau khi xoa pha ");
				for(int i=0;i<size;i++){
							printf("%d\t",arr[i]);
				}
			}
			break;
			
		case 7:
			if(size<=0){
				printf("moi ban nhap giai tri can vao mang");
					break;
			}else {
				printf("dau la mang sau khi sap xep theo thu tu giam dan ");
				for(int i=0;i<size-1;i++){
					for(int j=i+1;j<size;j++){
						if(arr[i]<arr[j]){
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
			}
			break;	
		case 8:
		if(size<=0){
					printf("moi ban nhap giai tri can vao mang");
					break;
			}else {
				int cnt,t;
				printf("moi ban nhap vao gia tri can tim kiem");
				scanf("%d",t);
				for(int i=0;i<size;i++){
					if(t==arr[i]){
						printf("gia tri ban can tim nam o vi tri arr[i]",i);
						cnt=1;
					}
				}
				if(cnt!=1){
					printf("gia tri ban can tim khong co trong mang");
				}
			}
			break;	
		case 9:
	if(size<=0){
						printf("moi ban nhap gia tri vao mang");
						break;
					}else{
						printf("Cac so nguyen to trong mang: ");
		                for (int i = 0; i < size; i++) {
		                    int isPrime = 1;
		                    if (arr[i] <= 1) {
		                        isPrime = 0;
		                    } else {
		                        for (int k = 2; k <= sqrt(arr[i]); k++) {
		                            if (arr[i] % k == 0) {
		                                isPrime = 0;
		                                break;
		                            }
		                        }
		                    }
		                    if (isPrime) {
		                        printf("%d ", arr[i]);
		                    }
		                }
		         	}
			break;
	/*	case 10;
			break;*/
		case 11:
		printf(" THOAT KHOI MENU");
			return 0;
			break;							
			
	}
	
		}while(1);
	
}
