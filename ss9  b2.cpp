#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int i;

    printf("Mang ban dau:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int index, newValue;

    printf("Nhap vi tri can sua: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Vi tri khong hop ly! Vui long nhap lai.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    array[index] = newValue;

    printf("Mang sau khi sua:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

