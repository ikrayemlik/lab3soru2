#include <stdlib.h>

/* Girilen dizideki en b�y�k eleman� bulan program� C dilinde Rek�rsif olarak yaz�n�z. */
 int maximum(int arr[], int n) {
    // Dizinin sadece bir eleman� kald���nda, bu eleman� d�nd�r
    if (n == 1){
	
        return arr[0];
}
    // Dizinin ilk eleman�n� al
    int first = arr[0];

    // �lk elemandan sonraki elemanlar i�inde en b�y��� bul
    int rest_max = maximum(arr + 1, n - 1);

    // �lk eleman ile geri kalan elemanlar aras�ndaki maksimumu hesapla
    if (first > rest_max){
	
        return first;
    }
    else{
	
        return rest_max;
    }
}    
int main() {
	
int arr[];
int size,j;	
printf("dizinin boyutunu giriniz");
scanf("%d",&size);	
printf("dizinin elemanlarini girin ");
for(j=0;j<size;j++){
	
	scanf("%d",&arr[j]);
}
 int max = maximum(arr, size);
    printf("En buyuk eleman: %d\n", max);
}
