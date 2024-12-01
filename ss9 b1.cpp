#include<stdio.h>
int main(){
	int array[100];
	int n;
	int i;
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}

	int index;
	printf("Nhap vi tri muon them phan tu ");
	scanf("%d",&index);
	
	int valueItem;
	printf("moi ban nhap gia tri ");
	scanf("%d",&valueItem);
	
	for ( i = n; i > index; i--) {
        array[i] = array[i - 1];
    }
    
        array[index] = valueItem;
        n++;
        
         printf("Mang sau khi chen: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    return 0;
}
