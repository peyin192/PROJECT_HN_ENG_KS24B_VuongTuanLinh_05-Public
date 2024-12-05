#include <stdio.h>
int main(){
	int option;
	int n=0;
	int arr[100];
	int max=arr[0];
	int max2=arr[0];
	int number=0;
	int del;
	int start=0;
	int mid;
	int search;
	int value;
	int selectionSort;
	int binarySearch;
	int found=0;
	
	while(1){
		printf("MENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 …)\n");
		printf("3. Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
		printf("4. Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n");
		printf("5. Them 1 phan tu vao vi tri dau tien trong mang\n");
		printf("6. Xoa phan tu tai 1 vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Tim kiem phan tu co ton tai trong mang hay khong\n");
		printf("9. Sap xep va hien thi toan bo phan tu co tronh mang sao cho toan bo so le dung truoc, so chan dung sau\n");
		printf("10. Dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang theo dang (arr[0] = 1 - le, arr[1] = 2 - chan …)\n");
		printf("11. Thoat\n");
		
		printf("Hay nhap lua chon: ");
		scanf("%d",&option);
		
		switch(option){
			case 1:
				printf("Nhap so phan tu: ");
				scanf("%d",&n);
				
				for(int i=0;i<n;i++){
					printf("Nhap cac gia tri phan tu thu %d: ",i+1);
				    scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("In ra cac phan tu: \n");
				for(int i=0;i<n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
			case 3:
			case 4:
				for(int i=0;i<n;i++){
				    if(arr[i]>max){
					    max = arr[i];
				}
				
				}
			
			printf("%d\n",max2);
			break;
			case 5:
			    printf("Nhap gia tri phan tu can them vao vi tri dau tien: ");
                scanf("%d", &value);
                for (int i = n; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[0] = value;
                n++;
                break;
			case 6:
			    printf("Nhap vi tri muon xoa: ");
			    scanf("%d",&del-1);
			    for(int i=del;i<n;i++){
				    arr[i]=arr[i+1];
			}
			    n--;
			    for(int i=0;i<n;i++){
				    printf("%d ",arr[i]);
			}  
			break;
			case 8:
				printf("Nhap gia tri can tim: ");
				scanf("%d",&value);
				for(int i=0;i<n;i++){
					if(arr[i]==value){
						printf("Gia tri %d nam o vi tri: %d\n",value,i);
						found=1;
					}
				}
				if(found != 1){
					printf("Gia tri %d khong co trong mang \n",value);
				}
				break;
			case 11:
				return 0;
			
			
		}
	}
}
